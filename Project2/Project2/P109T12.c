#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()//������ 20233105425
{
	int sqrttt(x, y);
	int x, y;
	scanf("&lf,%lf", &x, &y);
	if (sqrttt)
	{
		printf("�߶�Ϊ10");
	}
	else
	{
		printf("�߶�Ϊ0");
	}
	return 0;
}

int sqrttt(int x, int y)
{
	int a;
	a = sqrt(pow((x - 2), 2) + pow((y - 2), 2)) < 1 || sqrt(pow((x + 2), 2) + pow((y - 2), 2)) < 1 || sqrt(pow((x + 2), 2) + pow((y + 2), 2)) < 1 || sqrt(pow((x - 2), 2) + pow((y + 2), 2)) < 1;
	return a;
}