#include<stdio.h>
int main()
{
	int A;
	scanf("%d", &A);
	if (A <= 0)
		printf("输入错误");
	else
	{
		A = A % 5;
		switch (A)
		{
		case 1:printf("水"); break;
		case 2:printf("火"); break;
		case 3:printf("木"); break;
		case 4:printf("金"); break;
		case 0:printf("土"); break;
		}
	}
	return 0;
}








