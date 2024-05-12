#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double x = 0, y = 0;
	scanf("%lf", &x);
	if (x < 1)
	{
		y = x;
	}
	else if (x < 10)
	{
		y = 2 * x - 1;
	}
	else
	{
		y = 3 * x - 11;
	}
	printf("%lf", y);
	return 0;
}

