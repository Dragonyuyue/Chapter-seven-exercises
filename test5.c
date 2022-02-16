#include<stdio.h>
double calcu_factorial(int x)
{
	int  j = 0, i = 0;
	double sum = 0;
	double mul = 1;
		for (i = 1; i <= x; i++)
		{
			mul = mul * i;
			sum += mul;
		}
		return sum;
}
int main()
{
	int x = 0;
	printf("num=");
	scanf_s("%d", &x);
	double ret=calcu_factorial(x);
	printf("%18.f\n", ret);
	return 0;
}