#include<stdio.h>
//�ص�����
int add(int,int);

//�ص�������ʵ�ֺ���,����һ������ָ����Ϊ����
int callback_add(int a,int b, int (*pf)(int, int));

int main() {
	int a = 10;
	int b = 20;
	printf("%d + %d = %d\n", a, b, add(a,b));
	//�ص�����ʵ��-�ѻص�������ַ���ݸ�ʵ�ֺ���
	int c = callback_add(a, b, add);
	printf("callback_add(%d,%d,&add) = %d\n", a, b, c);



	system("pause");
	return 0;
}

//�ص�����
int add(int a, int b) {
	return a + b;
}

//�ص�������ʵ�ֺ���,����һ������ָ����Ϊ����
int callback_add(int a, int b, int(*pf)(int, int)) {
	return pf(a,b);
}