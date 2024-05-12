/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	int a = 0, b = 0, c = 0, d = 0, i = 0, j = 0;
	scanf("%d,%d", &a, &b);
	for (i=b; i >= 0; i--)
	{
		for (j = i-1; j >= 0; j--)
		{
			c = c + pow(10, j);
		}
		d = d + c * a;
		c = 0;
	}
	printf("a+aa+aaa+...=%d", d);
	return 0;
}*/