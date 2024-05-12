#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int sum=0;
	for (int i = 2; i < 1000; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0) sum += j;
		}
		if (i == sum)
		{
			printf("%d its factors are 1",i);
			for (int k = 2; k < i; k++)
				if (i % k == 0) printf(",%d", k);
			printf("\n");
		}
		sum = 0;
	}
	return 0;
}

