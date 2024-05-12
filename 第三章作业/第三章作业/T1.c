#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	unsigned int a;
	scanf("%u", &a);
	if (a >=1000||a<100)
		printf("-1");
	else
	{
		if (a % 100 != 0 && a % 10 != 0)
			while (a)
			{
				printf("%u", a % 10);
				a = a / 10;
			}
		else
			if (a % 100 == 0)
				printf("%u", a / 100);
			else
			{
				a = a / 10;
				while (a)
				{
					printf("%u", a % 10);
					a = a / 10;
				}
			}
	}
	return 0;
}


