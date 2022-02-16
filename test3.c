#include<stdio.h>
void pc(char c, int n)
{
	int i;
	for (i = 0; i < n; i++)
	putchar(c);
	putchar('\n');
}
void main()
{
	char ch;
	ch = getchar();
	pc(ch, 10);
}