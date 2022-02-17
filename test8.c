#include<stdio.h>
#include<math.h>
double Power_by(int x, int y)
{
	double sum = pow(x, y);
	return sum;

}
int main()
{
	int x = 0 ,y = 0;
	printf("input=");
	scanf_s("%d%d", &x, &y);
	double ret=Power_by(x,y);
	printf("%f\n", ret);
	return 0;
}
#include<stdio.h>
#include<math.h>
double Power_by(int x, int y)
{
	double sum = 0;
	if (y == 0)
	{
		sum = 1;
	}
	else
		return Power_by(x, y - 1) * x;

}
int main()
{
	int x = 0, y = 0;
	printf("input=");
	scanf_s("%d%d", &x, &y);
	double ret = Power_by(x, y);
	printf("%f\n", ret);
	return 0;
}
