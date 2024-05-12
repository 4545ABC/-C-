#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int mata[4][3] = { 0 }, matb[3][2] = { 0 }, matc[4][2] = { 0 }, i, j, k;
	printf("please input a:\n");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &mata[i][j]);
		}
	printf("please input b:\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &matb[i][j]);
		}
	printf("the result of a*b:\n");
	for (i = 0; i < 4; i++)
		for (k = 0; k < 3; k++)
			for (j = 0; j < 2; j++)
				matc[i][j] += mata[i][k] * matb[k][j];
	for (i = 0; i < 4; i++)
		printf("%d %d\n", matc[i][0], matc[i][1]);
	return 0;
}