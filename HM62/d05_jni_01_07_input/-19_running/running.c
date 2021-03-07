#include<stdio.h>
int main() {
	int *p = NULL;
	int *q = NULL;
	void *v = NULL;

	v = p;//变量可以接受任何类型的指针赋值
	q = v;//可以向任意指针变量赋值


	//int id[20];//在栈上分配
	
	int num;
	printf("输入学生人数：");
	scanf("%d",&num);
	printf("输入学生学号：");
	//malloc---在堆区分配num个元素的整形数组
	int *pid=(int*)malloc(num * sizeof(int));

	for (int i = 0; i < num; i++)
	{
		scanf("%d", pid + i);
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d\n", pid[i]);
	}

	printf("再次输入学生人数：");
	scanf("%d", &num);
	printf("再次输入学生学号：");

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
	free(pid);//释放
	getchar();
	getchar();
	return 0;
}