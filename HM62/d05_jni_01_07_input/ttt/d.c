#include<stdio.h>
//ȫ�ֱ���result_real,result_imag
float result_real, result_imag;
void complex_prod(float x1, float y1, float x2, float y2);
int main() {
	complex_prod(1, 2, 3, 4);
	//��ӡȫ�ֱ���
	printf("product of complex is %f+%fi\n", result_real, result_imag);

	int a = 1;
	int b = 8;
	getchar();
	return 0;
}
void complex_prod(float x1, float y1, float x2, float y2)
{
	//��ȫ�ֱ�����ֵ
	result_real = x1*x2 - y1*y2;
	result_imag = x1*y2 + x2*y1;
}

int add(int a,int b) {
	return a + b;
}
