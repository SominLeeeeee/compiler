struct node {
	int a;
}

enum color {white, red = 10, green = 10+1, blue, black};
enum color c1, c2;

auto int

int *a, **b;

int *a[5];
float (*b[10]) (int);

int *f(float*);
float (*b[]) (int, ...);

void func1(int a, int* b, int c[10]);
int anything();

int main() {
	int a = 1;
	int *b = &a;
	int c[10] = { 0 };

	auto float
	static char b;
	int a, b;

	int;

	func1(a, b, c);

	for(x; x<a; x++) printf("test");
	while(1) {break;}
	do {x=1; continue;} while (a++);

	if(a == 1) func1(a, b, c);
	if(a > b) {x++;} else {max = x;}
	switch(a) {anything();}

	1+2;
	2-3;
	3*4;
	4/5;
	!a;
	++b;
	--c;
	a < b;
	b > a;
	a <= b;
	b >= a;
	a == b;
	a != b;
	a && b;
	a || b;
	(int)a;
	sizeof(int);
}

void func1(int, int*, int[10]) {
	return;
}

void *func2(int a, ...) {
	int x;
	x = a * a;
	result = 2 + 3 * 4;
	x = (2 + 3) * 4;
}
int anything() {
	return 1;
}
