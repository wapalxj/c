//��C������ ASCII������ַ��ǿ����໥ת���ġ�
#include<stdio.h>

int main() {
	/*
	unsigned a;                                    
	int b = -1;                                    
	a = b;
	char c;
	int i;

	printf("b=%d  a=%u\n", b, a);  
	c = 43, i = c;
	a = 65534u; 
	b = a;  
	printf("i=%d \n", i);

	c = '\376'; 
	i = c;
	printf("%d %u\n", b, a);                         
	printf("%d  %u\n", b, a);
	//�������󣬵ڶ���a �ó��������Ƶ�в�һ�¡�
	printf("i=%d \n", i);

	getchar();
	*/

	int i = 0;
	char buf[10];
	char tar[20] = { 'h', 'e', 'l', 'l','o' };

	printf("�����ַ�����");
	scanf("%s",buf);
	//printf ��%s���������\0
	printf("buf==%s\n", buf);
	//����\0�����hello����ܻ����δ֪���� 
	printf("tar==%s\n", tar);
	//pause
	scanf("%s", buf);
	return 0;

}