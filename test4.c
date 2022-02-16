//#include<stdio.h>
//long round(float a, float b, float c, float d, float e)
//{
//	int sum = 0;
//	sum =(int)(a+0.5) + (int)(b+0.5) + (int)(c+0.5) + (int)(d+0.5) + (int)(e+0.5);
//	return sum;
//}
//int main()
//{
//	float a, b, c, d, e;
//	printf("input:");
//	scanf_s("%f%f%f%f%f", &a, &b, &c, &d, &e);
//	long ret = round(a, b, c, d, e);
//	printf("%d\n", ret);
//	return 0;
//}//way 1
#include <stdio.h>
long round(float x)
{
	return (int)(x + 0.5); 		/* 将x的第一位小数四舍五入 */
}
void main()
{
	float x; 
	long s = 0;  
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%f", &x);
		s = s + round(x);
	}
	printf("s=%ld\n", s);
}