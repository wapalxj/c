#include<stdio.h>
//回调函数
int add(int,int);

//回调函数的实现函数,传递一个函数指针作为参数
int callback_add(int a,int b, int (*pf)(int, int));

int main() {
	int a = 10;
	int b = 20;
	printf("%d + %d = %d\n", a, b, add(a,b));
	//回调函数实现-把回调函数地址传递给实现函数
	int c = callback_add(a, b, add);
	printf("callback_add(%d,%d,&add) = %d\n", a, b, c);



	system("pause");
	return 0;
}

//回调函数
int add(int a, int b) {
	return a + b;
}

//回调函数的实现函数,传递一个函数指针作为参数
int callback_add(int a, int b, int(*pf)(int, int)) {
	return pf(a,b);
}