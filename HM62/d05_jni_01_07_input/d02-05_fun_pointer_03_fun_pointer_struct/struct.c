#include<stdio.h>
//结构体中的函数
struct Struct {
	int id;
	char name[20];
	//定义一个获取信息的函数指针
	void (*getinf)(struct Struct stu);
};

//函数
void printinf(struct Struct stu) {
	printf("id==%d\n", stu.id);
	printf("name==%s\n", stu.name);
}

int main() {
	struct Struct stu1 = { 1, "vero",printinf};
	stu1.getinf(stu1);


	system("pause");
	return 0;
}