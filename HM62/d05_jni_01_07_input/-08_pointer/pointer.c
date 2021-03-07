#include<stdio.h>
#include<stdlib.h> 
#include <windows.h> //win头文件
int main() {
	int t = 120;
	printf("欢迎来到连连看。。。\n");
	printf("&t=%p\n",&t);
	for (int i = 120; i >0; i--)
	{
		printf("剩余%ds\n",i);
		Sleep(1000);
	}
	system("pause");
	return 0;
}



