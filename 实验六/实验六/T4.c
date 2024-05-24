#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int* T_Mat(int MatA[3][3]);
	int* p;
	int MatA[3][3] = { 0 }, i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &MatA[i][j]);
	p=T_Mat(MatA);
	for (i = 0,j=0; i < 9; i++,j++)
	{
		printf(" %d", p[i]);
		if (j == 2)
		{
			printf("\n");
			j = -1;
		}

	}
		
	return 0;

}
int* T_Mat(int MatA[3][3])
{
	static int MatB[3][3] = { 0 },i,j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			MatB[i][j] = MatA[j][i];
	return *MatB;
}