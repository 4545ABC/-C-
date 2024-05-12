#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void xsort(int a[15]);
int main()//20233105425梁家齐 
{
	int a[15] = { 0 },i=0,num=0,l=0,r=14;
	for (i; i < 15; i++)
		scanf("%d", &a[i]);
	xsort(a);
	scanf("%d", &num);
	while (l<=r)
	{
		i = l + ((r - l) / 2);
		if (a[i] < num) 
		{
			r = i - 1;
		}
		else if (a[i] > num) 
		{
			l = i + 1;
		}
		else
		{
			printf("%d",i+1);
			break;
		}
		

	}
	if(a[i]!=num)
	{
		printf("无此数");
	}
	return 0;
	

	
}
void xsort(int a[15])
{
	int max,i=0,t=0;
	max = a[0];
	for (int j = 0; j < 15; j++)
	{
		for (i = j; i < 15; i++)
		{
			if (max <= a[i])
			{
				t = max;
				max = a[i];
				a[i] = t;
			}
		}
		a[j] = max;
		if (j < 14)
			max = a[j + 1];
		else
			break;
	}
}
