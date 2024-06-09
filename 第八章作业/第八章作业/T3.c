#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	void swap(int*, int*);
	int i, Num[10] = { 0 },imax=0,imin=0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &Num[i]);
		if (Num[i] >= Num[imax])
			imax = i;
		if (Num[i] <= Num[imin])
			imin = i;
	}
	swap(&Num[9], &Num[imax]);
	swap(&Num[0], &Num[imin]);
	printf("Now,they are:\n");
	for (i = 0; i < 10; i++)
		printf("%d ", Num[i]);
	return 0;
}
void swap(int* a, int* b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
