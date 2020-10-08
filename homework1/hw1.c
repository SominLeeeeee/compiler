#include <stdio.h>

enum {NULLPTR, NUMBER, PLUS, STAR, LP, RP, END} token;

float num = 0.0;
int flag_int = 1, flag_float = 0;
int position = 0;
int position_warning;
int prev_token;

float expression();
float term();
float factor();
void get_token();
void error(int i);

void main() {
	float result;
	get_token();
	result = expression();
	
	//if(token != END) error(3);
	//else {
		if(flag_int && flag_float) error(4);
		
		if(!flag_float) printf("%d \n", (int)result);
		else printf("%f \n", result);
	//}
}

float term() {
	float result;
	result = factor();
	
	while(token == STAR) {
		get_token();
		result = result * factor();
	}

	return result;
}

float expression() {
	float result;
	result = term();
	
	while(token == PLUS) {
		get_token();
		result = result + term();
	}

	return result;
}

float factor() {
	float result;
	
	if(token == NUMBER) {
		result = num;
		get_token();
		num = 0;
	}
	else if (token == LP) {
		get_token();
		result = expression();
		
		if(token == RP) get_token();
		else error(2);
	}
	else error(1);

	return result;
}

void get_token() {
	/* TODO */
	// next_token => token
	// number value => num

	char next_token;
	float op = -1.0;
	
	if(token == NUMBER) next_token = prev_token;
	else next_token = getchar();
	position++;
	
	if('0' <= next_token && next_token <= '9') {
		token = NUMBER;

		while(('0' <= next_token && next_token <= '9') || next_token == '.') {
			if(next_token == '.') {
				op = 1;
				flag_float = 1;
				position_warning = position;
			}
			else {
				if(op == -1.0) num = num*10 + (next_token - '0'); /* integer */
				else {	/* float */
					op /= 10;
					num += (next_token - '0') * op;
				} 
			}

			next_token = getchar();
		}
		prev_token = next_token;
	} /* make num */

	else {
		switch(next_token) {
		case '+':
			token = PLUS;
			break;
		case '*':
			token = STAR;
			break;
		case '(':
			token = LP;
			break;
		case ')':
			token = RP;
			break;
		case EOF:
			token = END;
			break;
		default:
			token = NULLPTR;
			break;
		}
	}
	
	return;
}

void error(int i) {
	switch(i) {
	case 1:
		printf("factor는 숫자거나 (로 시작해야 합니다\n");
		break;
	case 2:
		printf("factor는 )로 끝나야 합니다\n");
		break;
	case 3:
		printf("수식이 끝나지 않았습니다\n");
		break;
	case 4:
		printf("WARNING: 위치 %d 부근에서 피연산자 형식 혼합됨\n", position_warning);
	}
}
