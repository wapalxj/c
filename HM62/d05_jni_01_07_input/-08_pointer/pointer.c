#include<stdio.h>
#include<stdlib.h> 
#include <windows.h> //winͷ�ļ�
int main() {
	int t = 120;
	printf("��ӭ����������������\n");
	printf("&t=%p\n",&t);
	for (int i = 120; i >0; i--)
	{
		printf("ʣ��%ds\n",i);
		Sleep(1000);
	}
	system("pause");
	return 0;
}



