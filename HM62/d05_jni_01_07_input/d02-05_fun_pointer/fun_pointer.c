#include<stdio.h>


void fun();
int add(int ,int);

//函数指针写法演变过程：
//int(int, int *) * pf;-->方式不美观，变为
//int *pf(int, int *);-->与函数声明冲突，变为
//int(*pf)(int, int *);//声明一个函数指针变量pf,他存储返回值为int,参数为(int, int *)的函数的地址


int main() {
	//printf("main函数的地址:%p\n",&main);
	//printf("main函数的地址:%p\n", main);
	//通过函数名调用
	//fun();

	//函数指针
	int(*pf)(int, int );//声明函数指针变量为pf
	//pf = &add;//赋值方式1
	pf = &add;//赋值方式2
	printf("(*pf)(1,1)==%d\n", (*pf)(1,1));//调用方式1
	printf("pf(1,1)==%d\n", pf(1, 1));//调用方式2


	system("pause");
	return 0;
}

void fun() {
	printf("fun called\n");
}

int add(int a, int b) {
	return a+b;
}