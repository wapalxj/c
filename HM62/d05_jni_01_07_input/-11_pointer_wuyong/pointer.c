#include<stdio.h>
int main() {
	int *p=NULL;
	int i = 120;
	p = &i;
	printf("*p=%p\n",*p);

	system("pause");
	return 0;
}