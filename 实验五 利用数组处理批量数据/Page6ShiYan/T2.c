#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10] = { 0 }, b[10] = { 0 }, min = 0, i = 0, t = 0;
	for (i; i < 10; i++)
		scanf("%d", &a[i]);
	min = a[0];
	for (int j = 0; j < 10; j++)
	{
		for (i = j; i < 10; i++)
		{
			if (min >= a[i])
			{
				t = min;
				min = a[i];
				a[i] = t;
			}
		}
		a[j] = min;
		if (j < 8)
			min = a[j + 1];
		else
			break;
	}
	for (i = 0; i < 10; i++)
		printf(" %d", a[i]);
	return 0;

}*/