#include<stdio.h>
#include<math.h>
int digit(int x, int y)
{
	int i = 0;
	for (i = 1; i < y; i++)
	{
		x = x / 10;
	}
	return x%10;
}
int main()
{
	int x, y;
	printf("input:");
	scanf_s("%d%d", &x, &y);
	int ret=digit(x, y);
	printf("%d", ret);
	return 0;
}
