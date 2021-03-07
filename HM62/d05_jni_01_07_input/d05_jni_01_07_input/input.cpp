//在C程序中 ASCII编码和字符是可以相互转换的。
#include<stdio.h>

int main() {
	/*
	unsigned a;                                    
	int b = -1;                                    
	a = b;
	char c;
	int i;

	printf("b=%d  a=%u\n", b, a);  
	c = 43, i = c;
	a = 65534u; 
	b = a;  
	printf("i=%d \n", i);

	c = '\376'; 
	i = c;
	printf("%d %u\n", b, a);                         
	printf("%d  %u\n", b, a);
	//代码无误，第二个a 得出结果与视频中不一致。
	printf("i=%d \n", i);

	getchar();
	*/

	int i = 0;
	char buf[10];
	char tar[20] = { 'h', 'e', 'l', 'l','o' };

	printf("输入字符串：");
	scanf("%s",buf);
	//printf 对%s，会输出到\0
	printf("buf==%s\n", buf);
	//不以\0输出，hello后可能会输出未知内容 
	printf("tar==%s\n", tar);
	//pause
	scanf("%s", buf);
	return 0;

}