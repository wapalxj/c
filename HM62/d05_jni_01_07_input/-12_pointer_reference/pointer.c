#include<stdio.h>

void swap1(int, int);
void swap2(int *, int *);
int main() {
	int a = 10;
	int b = 20;
	printf("a=%d  b=%d\n",a,b);
	swap1(a, b);
	printf("a=%d  b=%d\n", a, b);


	printf("a=%d  b=%d\n", a, b);
	swap2(&a, &b);
	printf("a=%d  b=%d\n", a, b);

	system("pause");
	return 0;
}

void swap1(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void swap2(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

//´íÎóµÄÐ´·¨
void swap3(int *x, int *y) {
	int *temp;
	*x = *y;
	*y = *temp;
}