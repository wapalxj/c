#include<stdio.h>

int main() {
	int i = 10;
	int *p ;
	p = &i;
	printf("&i=%p\n",p);

	printf("i=%d\n", i);

	*p = 30;//Ö¸ÕëÔËËã·û
	printf("i=%d\n", i);

	system("pause");
	return 0;
}