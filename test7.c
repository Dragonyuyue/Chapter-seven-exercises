#include<stdio.h>
int Bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[5] = { 0 };
	int i = 0,j=0;
	int x = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("input=");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	Bubble_sort(arr,sz);
	for (j = 0; j < sz; j++)
	{
		printf("%d", arr[j]);
	}
	return 0;

}