#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double a;
	scanf("%lf", &a);
	if (a - (double)(int)a >= 0.5)
		printf("%d", (int)a + 1);
	else
		printf("%d", (int)a);
	return 0;
}


