#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int isloop(int x);
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	for (a = a % 2 == 0 ? a : a + 1; a <= b; a += 2)
		if (isloop(a))
			printf("%d\n", a);
	return 0;
}
int isloop(int x)
{
	int Num[10] = { 0 },i,j;
	for (i = 0; i < 10; i++)
	{
		Num[i] = x % 10;
		x = (x - x % 10) / 10;
		if (x == 0)
			break;
	}
	j = i;
	for (i = 0; i < 10; i++)
	{
		if (j == 0)
			return 1;
		if (Num[i] == Num[j])
			j--;
		else
			return 0;
	}
}