#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void char_insert(int page[10], int c);
int main()
{
	int page[10] = { 1,4,6,9,13,16,19,28,40,100 },c=0;
	scanf("%d", &c);
	char_insert(page, c);
	return 0;

}
void char_insert(int page[10], int c)
{
	int l = 0,i;
	for (l = 0; l<10; l++)
	{
		if (page[l] >= c)
		{
			for (i = 0; i < l; i++)
			{
				printf("%d ", page[i]);
			}
			printf("%d", c);
			for (i = l; i < 10; i++)
			{
				printf(" %d", page[i]);
			}
			break;
		}
		else
			continue;
	}
	if (c > page[9])
	{
		for (i = 0; i <= 9; i++)
		{
			printf("%d ", page[i]);
		}
		printf("%d", c);
	}
}