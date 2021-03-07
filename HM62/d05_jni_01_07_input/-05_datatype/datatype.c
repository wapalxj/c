#include<stdio.h>

int f(int x);
int main() {
	/*
	printf("char--大小==%d\n",sizeof(char));
	printf("short--大小==%d\n", sizeof(short));
	printf("int--大小==%d\n", sizeof(int));
	printf("long--大小==%d\n", sizeof(long));
	printf("long long--大小==%d\n", sizeof(long long));

	printf("float-大小==%d\n", sizeof(float));
	printf("double--大小==%d\n", sizeof(double));
	printf("long double--大小==%zd\n", sizeof(long double));
	
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