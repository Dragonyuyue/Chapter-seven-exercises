#include <stdio.h>
int fun(long x)
{
	int s = 0, i;
	for (i = 1; i < x; i++)
	
		if (x % i == 0)//ÊäÈëx    È¡1-£¨1-x£©µÄÓà
			s = s + i;
		if (s == x)
			return 1;
		else return 0;
	
}
void main()
{
	long a;
	scanf_s("%d", &a);
	int ret = fun(a);
	if (ret==1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
}