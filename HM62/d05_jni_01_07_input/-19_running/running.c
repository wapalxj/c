#include<stdio.h>
int main() {
	int *p = NULL;
	int *q = NULL;
	void *v = NULL;

	v = p;//�������Խ����κ����͵�ָ�븳ֵ
	q = v;//����������ָ�������ֵ


	//int id[20];//��ջ�Ϸ���
	
	int num;
	printf("����ѧ��������");
	scanf("%d",&num);
	printf("����ѧ��ѧ�ţ�");
	//malloc---�ڶ�������num��Ԫ�ص���������
	int *pid=(int*)malloc(num * sizeof(int));

	for (int i = 0; i < num; i++)
	{
		scanf("%d", pid + i);
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d\n", pid[i]);
	}

	printf("�ٴ�����ѧ��������");
	scanf("%d", &num);
	printf("�ٴ�����ѧ��ѧ�ţ�");

	//realloc---
	pid = (int *)realloc(pid, num * sizeof(int));
	for (int i = 0; i < num; i++)
	{
		scanf("%d", pid + i);
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d\n", pid[i]);
	}
	free(pid);//�ͷ�
	getchar();
	getchar();
	return 0;
}