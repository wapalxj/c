#include<stdio.h>
#include<stdlib.h>
//结构体
struct Student
{
	int id;
	char name[20];
	int age;
	float score;
}stu;//stu是全局结构体变量，bss区

struct 
{
	int id;
	char name[20];
	int age;
	float score;
}vero;//vero是唯一一个这种类型的变量

int main() {
	//全局变量stu
	printf("stu.id==%d\n", stu.id);
	printf("stu.name==%s\n", stu.name);
	//定义1
	struct Student stu0;
	stu0.id = 0;
	stu0.name[0] = 'v';
	stu0.name[1] = '\0';
	printf("stu0.id==%d\n", stu0.id);
	printf("stu0.name==%s\n", stu0.name);
	//定义2
	struct Student stu1 = {1,"vero",20,90.5};
	printf("stu1.id==%d\n", stu1.id);
	printf("stu1.name==%s\n", stu1.name);
	//指针
	struct Student *pstu1 = &stu1;
	//指针访问方式1
	printf("(*pstu1).id==%d\n", (*pstu1).id);
	//指针访问方式2
	printf("pstu1->id%d\n", pstu1->id);

	//使用指针动态创建对象
	struct Student *p=NULL;
	p = (struct Student *)malloc(4+30+4+4);
	p->id = 20;
	p->name[0]='v';
	p->name[1] = 'e';
	p->name[2] = 'r';
	p->name[3] = 'o';
	p->name[4] = '\0';
	p->age = 20;
	p->score = 100;
	printf("%d\n",p->id);
	printf("%s\n", p->name);
	system("pause");
	return 0;
}

