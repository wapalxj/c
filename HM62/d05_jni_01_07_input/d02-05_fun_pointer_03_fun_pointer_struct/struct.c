#include<stdio.h>
//�ṹ���еĺ���
struct Struct {
	int id;
	char name[20];
	//����һ����ȡ��Ϣ�ĺ���ָ��
	void (*getinf)(struct Struct stu);
};

//����
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