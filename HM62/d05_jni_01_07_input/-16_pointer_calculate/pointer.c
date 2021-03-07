#include<stdio.h>
//指针的运算


int main() {
	char *p1 = NULL;
	short *p2 = NULL;
	int *p3 = NULL;
	double *p4 = NULL;

	//加法
	printf("p1 = %#x   p1 + 1= %#x \n",p1,p1+1);
	printf("p2 = %#x   p2 + 1= %#x \n", p2, p2 + 1);
	printf("p3 = %#x   p3 + 1= %#x \n", p3, p3 + 1);
	printf("p4 = %#x   p4 + 1= %#x \n", p4, p4 + 1);

	//2个指针相减，表示间隔距离
	int buf[5];
	int *p = &buf[0];
	int *q = &buf[3];
	printf("q - p=%d \n", q - p);


	system("pause");
	return 0;
}