#include<stdio.h>

//¶ş¼¶Ö¸Õë
int main() {
	int a = 10;
	int *p = &a;
	int **pp = &p;

	printf("a = %d\n",a);
	**pp = 20;
	printf("a = %d\n", a);


	system("pause");
	return 0;
}