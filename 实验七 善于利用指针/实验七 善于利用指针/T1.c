#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	void inv(int*, int*);
	int a[3] = { 0 }, * p, i, j;
	for (i = 0; i < 3; i++)
		scanf("%d", &a[i]);
	p = a;
	for(j=0;j<2;j++)
		for (i = 0; i < 2; i++)
		{
			if (p[i] > p[i + 1])
				inv(&p[i], &p[i + 1]);
		}
	for (i = 0; i < 3; i++)
		printf("%d ", p[i]);
	return 0;
}
void inv(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}