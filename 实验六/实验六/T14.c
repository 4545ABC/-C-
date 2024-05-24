#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int score[10][5] = { 0 }, i, j;
	int* p;
	double* ave(int a[10][5]);
	int* aves(int a[10][5]);
	int* high(int a[10][5]);
	int sigma(int a[10][5]);
	for (i = 0; i < 10; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &score[i][j]);
	printf("请输入调用的函数：（1-4）\n");
	scanf("%d", &i);
	switch (i)
	{
	case 1:p = ave(score);for (j = 0; j < 10; j++){printf(" %d", p[j]);}return 1;
	case 2:p = aves(score); for (j = 0; j < 5; j++) { printf(" %d", p[j]); }return 2;
	case 3:p = high(score); printf("High:%d,Stu:%d,Class:%d", p[0],p[1]+1,p[2]+1); return 3;
	case 4:printf("%d", sigma(score)); return 4;
	default:
		break;
	}

}
double* ave(int a[10][5])
{
	static double b[10];
	int i,j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
			b[i] += a[i][j];
		b[i] /= 5;
	}
	return b;
}
int* aves(int a[10][5])
{
	static int b[5];
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 10; j++)
			b[i] += a[j][i];
		b[i] /= 10;
	}
	return b;
}
int *high(int a[10][5])
{
	static int b[3] = {0};
	int i, j;
	b[0] = a[0][0];
	for (i = 0; i < 10; i++)
		for (j = 0; j < 5; j++)
			if (a[i][j] > b[0])
			{
				b[0]=a[i][j];
				b[1] = i;
				b[2] = j;
			}
	return b;
}
int sigma(int a[10][5])
{
	double* p;
	int i;
	double num1 = 0, num2 = 0;
	p = ave(a);
	for (i = 0; i < 10; i++) 
	{ 
		num1 += pow(p[i], 2); 
	}
	num1 /= 10;
	for (i = 0; i < 10; i++)
	{
		num2 += p[i];
	}
	num2 /= 10;
	num2 = pow(num2, 2);
	return num1 - num2;
}