#include<stdio.h>
#include<stdlib.h>
//�ṹ��
struct Student
{
	int id;
	char name[20];
	int age;
	float score;
}stu;//stu��ȫ�ֽṹ�������bss��

struct 
{
	int id;
	char name[20];
	int age;
	float score;
}vero;//vero��Ψһһ���������͵ı���

int main() {
	//ȫ�ֱ���stu
	printf("stu.id==%d\n", stu.id);
	printf("stu.name==%s\n", stu.name);
	//����1
	struct Student stu0;
	stu0.id = 0;
	stu0.name[0] = 'v';
	stu0.name[1] = '\0';
	printf("stu0.id==%d\n", stu0.id);
	printf("stu0.name==%s\n", stu0.name);
	//����2
	struct Student stu1 = {1,"vero",20,90.5};
	printf("stu1.id==%d\n", stu1.id);
	printf("stu1.name==%s\n", stu1.name);
	//ָ��
	struct Student *pstu1 = &stu1;
	//ָ����ʷ�ʽ1
	printf("(*pstu1).id==%d\n", (*pstu1).id);
	//ָ����ʷ�ʽ2
	printf("pstu1->id%d\n", pstu1->id);

	//ʹ��ָ�붯̬��������
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

