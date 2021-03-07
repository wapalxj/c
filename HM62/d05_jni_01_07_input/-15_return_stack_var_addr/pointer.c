#include<stdio.h>

//函数不能返回栈上变量的地址
//栈上变量在函数执行完后释放
//返回地址将得到不可预测的结果

int *c_fun() {
	int a = 10;
	return &a;
}

int main() {
	int *p = NULL;
	p = c_fun();
	printf("*p=%d\n", *p);
	printf("*p=%d\n", *p);
	printf("*p=%d\n", *p);
	system("pause");
	return 0;
}