#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char buf[10] = "abcde";
	char *p = buf;
	printf("sizeof(buf)==%d\n",sizeof(buf));

	printf("strlen(buf)==%d\n", strlen(buf));
	printf("strlen(p)==%d\n", strlen(p));


	system("pause");
	return 0;
}