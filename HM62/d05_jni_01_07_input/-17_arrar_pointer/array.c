#include<stdio.h>

void sort(int *p, int len);
void print_arr(int *p, int len);
int main() {
	/*
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
	printf("arr[%d] = %d  &arr[%d] = %p\n",i, arr[i], i,&arr[i]);
	}


	//数组名代表数组首元素首地址
	short array[5];
	printf("arr =%#x\n",arr);
	printf("&arr[0] =%#x\n", &arr[0]);


	//数组和指针的关系
	int a[5] = {0,1,2,3,4};
	int *p = a;
	printf("*(a+4) =%d\n", *(a + 4));
	printf("p[4] =%d\n", p[4]);
	*/

	//数组传参--数组名+元素个数
	int b[5] = { 10,21,13,42,5 };
	int a=5,b=4,i = 0;
	if (i<b<a) {

	}
	sort(b,5);
	print_arr(b, 5);



	system("pause");
	return 0;
}

//数组传参--数组名+元素个数
void print_arr(int *p, int len) {
	for (int i = 0; i < len; i++)
	{
		printf("*(p+i) =%d\n", *(p + i));
		printf("p[i] =%d\n", p[i]);
	}
}

//冒泡
void sort(int *p, int len) {
	int tmp;
	for (int i = 0; i < len - 1; i++)//排序轮数
	{
		for (int j = 0; j < len - 1 - i; j++)//每轮比较次数
		{
			if (p[j]>p[j + 1]) {
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
	
}