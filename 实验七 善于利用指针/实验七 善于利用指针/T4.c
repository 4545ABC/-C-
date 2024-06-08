#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	void inv(int*, int,int);
	int m, n,*ptr,i;
	printf("n:");
	scanf("%d", &n);
	printf("\nm:");
	scanf("%d", &m);
	ptr = malloc(n * sizeof(int));
	if (ptr == NULL)
		return EOF;
	for (i = 0; i < n; i++)
		scanf("%d", &ptr[i]);
	inv(ptr, m,n);
	for (i = 0; i < n; i++)
		printf("%d ", ptr[i]);
	free(ptr);
	return 0;
}
void inv(int* ptr, int m,int n)
{
	int a[10]={0}, i;
	for (i = 0; i < m; i++)
		a[i] = ptr[n-m + i];
	for (i = -1; i <= n - m; i++)
		ptr[n - i] = ptr[n - m - i];
	for (i = 0; i < 3; i++)
		ptr[i] = a[i];
}