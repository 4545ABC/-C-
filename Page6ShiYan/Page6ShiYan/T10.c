#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*int main()//20233105425Áº¼ÒÆë
{
	int Big = 0, Small = 0, nums = 0, space = 0, other = 0;
	char page[3][80] = { 0 };
	for(int i=0;i<3;i++)
		gets(page[i]);
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 80&&page[i][j]!='\0'; j++)
		{
			if (page[i][j] >= 'A' && page[i][j] <= 'Z')
				Big++;
			else if (page[i][j] >= 'a' && page[i][j] <= 'z')
				Small++;
			else if (page[i][j] ==' ')
				space++;
			else if (page[i][j] >= '0' && page[i][j] <= '9')
				nums++;
			else if(page[i][j]!=0)
				other++;
		}
	printf("Big=%d,Small=%d,Nums=%d,Spcae=%d,Others=%d", Big, Small, nums, space, other);
	return 0;
}*/