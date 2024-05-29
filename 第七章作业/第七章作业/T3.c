#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int num(int x);
int main()
{
	int a,i;
	int* p;
	scanf("%d", &a);
	p = (int *)malloc(sizeof(int) * a);
	for(i=a;i>0;i--)
		scanf("%d", &p[i-1]);
	printf("%d", num(p[a - 1]));
	for (a=a-1; a > 0; a--)
		printf(" %d", num(p[a-1]));
	free(p);
	return 0;
}
int num(int x)
{
	int Num[100] = { 0 },i;
	for (i = 0; i < 100; i++)
	{
		Num[i] = x % 10;
		x = (x - x % 10) / 10;
		if (x == 0)
		{
			Num[99] += Num[i];
			break;
		}
		Num[99] += Num[i];
	}
	return Num[99];
}