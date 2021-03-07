#include<stdio.h>
#include<math.h>


int loo(int m, int n);
int loo2(int m, int n);
int calc(int, int, int*);
int main() {
	//int a = 5, b = 4,c=1;
	//int r = calc(a,b,&c);
	//printf("a+b=%d,a-b=%d",c,r);

	loo(2,10);
	loo2(2, 3);
	system("pause");
	return 0;
}

//同时获得a+b,a-b的结果
int calc(int a, int b, int* p) {
	*p = a + b;
	return a - b;
}

int loo(int m,int n) {
	int r=0;
	for (int i = 0; i < n;i++) {
		int j=m;
		for (int k= 0; k < i; k++)
		{
			j = j*m;
		}
		r += j;
	}

	return r;
}

int loo2(int m, int n) {

	int pow = 1;
	for (int i = 0; i < n; i++)
	{
		pow = pow*m;
		printf("%d\n", pow);
	}
	int r= m*(1 - pow) / (1 - m);
	printf("%d\n", r);
	return r;
}