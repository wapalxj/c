#include<stdio.h>


void fun();
int add(int ,int);

//����ָ��д���ݱ���̣�
//int(int, int *) * pf;-->��ʽ�����ۣ���Ϊ
//int *pf(int, int *);-->�뺯��������ͻ����Ϊ
//int(*pf)(int, int *);//����һ������ָ�����pf,���洢����ֵΪint,����Ϊ(int, int *)�ĺ����ĵ�ַ


int main() {
	//printf("main�����ĵ�ַ:%p\n",&main);
	//printf("main�����ĵ�ַ:%p\n", main);
	//ͨ������������
	//fun();

	//����ָ��
	int(*pf)(int, int );//��������ָ�����Ϊpf
	//pf = &add;//��ֵ��ʽ1
	pf = &add;//��ֵ��ʽ2
	printf("(*pf)(1,1)==%d\n", (*pf)(1,1));//���÷�ʽ1
	printf("pf(1,1)==%d\n", pf(1, 1));//���÷�ʽ2


	system("pause");
	return 0;
}

void fun() {
	printf("fun called\n");
}

int add(int a, int b) {
	return a+b;
}