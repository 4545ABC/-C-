#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int Mat[10][10] = { 0 }, m, n, i, j, Set[20][3] = { 0 }, k = 0, k1 = 0, k2 = 0;
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &Mat[i][j]);

			if (Mat[i][j] > Set[k][0])
			{
				Set[k][0] = Mat[i][j];
				Set[k][1] = i;
				Set[k][2] = j;
			}
			else if(Mat[i][j] == Set[k][0])
			{
				k++;
				Set[k][0] = Mat[i][j];
				Set[k][1] = i;
				Set[k][2] = j;
			}
		}
		k++;
	}
	for (i = 0; i < k; i++)
	{
		for (j = Set[i][2],k1 = 0; k1 < m; k1++)
		{
			if (Mat[k1][j] < Set[i][0])
				goto SETTING1;
		}
		printf("%d %d %d\n", Set[i][0], Set[i][1]+1,Set[i][2]+1);
		k2++;
		while (0)
			SETTING1:break;
	}
	if (k2 == 0)
		printf("No answer");
	return 0;
}