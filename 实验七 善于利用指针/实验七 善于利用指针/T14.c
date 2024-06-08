#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	void inv(int*, int);
	int* ptr,n,i;
	scanf("%d", &n);
	ptr = malloc(n * sizeof(int));
	if (ptr == NULL)
		return EOF;
	for(i=0;i<n;i++)
		scanf("%d", &ptr[i]);
	inv(ptr, n);
	for (i = 0; i < n; i++)
		printf("%d ", ptr[i]);
	return 0;
}
void inv(int* ptr, int n)
{
	int* i, j,k;
	i = ptr + n-1;
	for (k = 0; k < (n + 1) / 2; k++,ptr++,i--)
	{
		j = *ptr;
		*ptr = *i;
		*i = j;
	}
}