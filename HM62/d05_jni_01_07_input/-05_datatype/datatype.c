#include<stdio.h>

int f(int x);
int main() {
	/*
	printf("char--��С==%d\n",sizeof(char));
	printf("short--��С==%d\n", sizeof(short));
	printf("int--��С==%d\n", sizeof(int));
	printf("long--��С==%d\n", sizeof(long));
	printf("long long--��С==%d\n", sizeof(long long));

	printf("float-��С==%d\n", sizeof(float));
	printf("double--��С==%d\n", sizeof(double));
	printf("long double--��С==%zd\n", sizeof(long double));
	
	*/
	int a;
	a = 10;
	int y;
	y = a + 1;
	printf("%d\n", y);


	y = f(a);
	

	getchar();
	return 0;
}

int f(int x) {
	return x + 1;
}

int g(int x) {
	return x + 1;
}