#include<stdio.h>

struct Student{
	int id;
	char name[20];
}; 

typedef struct {
	int id;
	char name[20];
}Stu;

typedef struct Teacher {
	int id;
	char name[20];
}*p_Tea;//p_Stu<==> struct Student*


int main() {
	typedef int a;
	a b=10;
	printf("%d\n",b);

	//结构体
	typedef struct Student  stu;
	stu stu1;
	printf("sizeof(stu1)=%d\n", sizeof(stu1));

	//结构体指针
	typedef struct Student * p_stu;
	p_stu p;
	struct Student * q= NULL;
	p = q;
	printf(" sizeof(p)=%d\n", sizeof(p));

	Stu stu2;
	stu2.id = 10;
	printf(" stu2.id=%d\n", stu2.id);
	system("pause");
	return 0;
}