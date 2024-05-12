#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()//梁家齐 20233105425
{
	int sqrttt(x, y);
	int x, y;
	scanf("&lf,%lf", &x, &y);
	if (sqrttt)
	{
		printf("高度为10");
	}
	else
	{
		printf("高度为0");
	}
	return 0;
}

int sqrttt(int x, int y)
{
	int a;
	a = sqrt(pow((x - 2), 2) + pow((y - 2), 2)) < 1 || sqrt(pow((x + 2), 2) + pow((y - 2), 2)) < 1 || sqrt(pow((x + 2), 2) + pow((y + 2), 2)) < 1 || sqrt(pow((x - 2), 2) + pow((y + 2), 2)) < 1;
	return a;
}