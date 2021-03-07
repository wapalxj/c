#include<stdio.h>
#include<stdlib.h>
//联合体，枚举
struct st {
	int a;
	long b;
	float c;
};

union un
{
	int a;
	long b;
	double c;
};

int main() {
	printf("sizeof(struct st)==%d\n", sizeof(struct st));
	printf("sizeof(struct un)==%d\n", sizeof(union un));

	struct st s;
	union un u;

	u.a = 10;
	printf("u.a=%d\n",u.a);
	u.b = 100;
	printf("u.a=%d\n", u.a);
	printf("u.b=%d\n", u.b);

	system("pause");
	return 0;
}