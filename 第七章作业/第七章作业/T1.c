#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int gcd(int a, int b);
int lcm(int a, int b);
int main(void)
{
	int m, n;
	scanf("%d,%d", &m, &n);
	printf("%d,%d", gcd(m, n), lcm(m, n));
	return 0;
}

int gcd(int a, int b)
{
	int temp;
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}


int lcm(int a, int b)
{
	int temp_lcm;
	temp_lcm = a * b / gcd(a, b);
	return temp_lcm;
}