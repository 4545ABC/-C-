#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	scanf("%d", &num);
	if (num <= 100)
	{
		if (num >= 90)
			printf("A");
		else if (num >= 80)
			printf("B");
		else if (num >= 70)
			printf("C");
		else if (num >= 60)
			printf("D");
		else
			printf("E");
	}
	else
	{
		printf("error");
	}
	return 0;

}
