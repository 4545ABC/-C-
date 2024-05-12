#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int FiBoNaCci(int n) 
{
	return (1 / sqrt(5)) * (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n));
}
int main()
{
	int FiBoNaCci(int n);
	int i;
	double sum=0;
	for (i = 2; i <= 21; i++)
	{
		sum += (double)FiBoNaCci(i + 1) / (double)FiBoNaCci(i);
	}
	printf("sum= %15.10lf", sum);
	return 0;
}