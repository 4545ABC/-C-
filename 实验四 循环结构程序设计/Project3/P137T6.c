#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	long long int JieCheng(int x);
	int a = 20;
	long long int b = 0;
	for (;a>= 0;)
	{
		b = b+JieCheng(a);
		a--;
	}
	printf("%lld", b);
	return 0;
}
long long int JieCheng(int x)
{
	long long int i = 1;
	while (x>0)
	{
		i = i * x;
		x--;
	}
	return i;
}
