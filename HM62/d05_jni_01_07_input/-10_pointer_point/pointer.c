
#include <stdio.h>
int main() {

	int i = 20;
	char c = 'k';

	int *p;
	char *q;

	p = &i;
	q = &c;

	p = &c;//int����ָ�룬ָ��char
	printf("%c\n",*p);
	p = (int *)&c;//ǿ������ת��

	printf("%c\n", *p);
	system("pause");
	return 0;

}