#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, i, j, k, Num1[50] = { 0 }, Num2[50] = { 0 }, Num3[50] = { 0 };
	scanf("%d", &a);
	for (i = 0; i < a; i++)
	{
		scanf("%d", &Num1[i]);
	}
	Num1[a] = 0x7fffffff;
	scanf("%d", &b);
	for (i = 0; i < b; i++)
	{
		scanf("%d", &Num2[i]);
	}
	Num2[b] = 0x7fffffff;
	a = a + b;
	for (i = 0, j = 0, k = 0; i < a; i++)
	{
		if (Num1[j] > Num2[k])
		{
			Num3[i] = Num2[k];
			k++;
		}
		else
		{
			Num3[i] = Num1[j];
			j++;
		}
	}
	printf("%d", Num3[0]);
	for(i=1;i<a;i++)
		printf(" %d",Num3[i]);
	return 0;
}