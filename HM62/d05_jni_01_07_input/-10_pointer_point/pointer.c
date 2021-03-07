
#include <stdio.h>
int main() {

	int i = 20;
	char c = 'k';

	int *p;
	char *q;

	p = &i;
	q = &c;

	p = &c;//int类型指针，指向char
	printf("%c\n",*p);
	p = (int *)&c;//强制类型转换

	printf("%c\n", *p);
	system("pause");
	return 0;

}