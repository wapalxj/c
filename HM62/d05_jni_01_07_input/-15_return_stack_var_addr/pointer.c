#include<stdio.h>

//�������ܷ���ջ�ϱ����ĵ�ַ
//ջ�ϱ����ں���ִ������ͷ�
//���ص�ַ���õ�����Ԥ��Ľ��

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