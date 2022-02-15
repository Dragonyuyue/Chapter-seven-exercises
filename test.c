#include<stdio.h>
int digitsum(unsigned int num)
{
	if (num > 9)
	{
		return digitsum(num / 10) + num % 10;
	}
	else
	{
		return num;
	}

}
int main()
{
	unsigned int n = 0;
	printf("input=");
	scanf_s("%d", &n);
	int ret = digitsum(n);
	printf("%d\n", ret);
	return 0;



}