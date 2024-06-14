#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void char_insert(char page[50], char c);
int main()
{
	char page[50] = { '0' },c=0;
	gets(page);
	c = getchar();
	char_insert(page, c);
	return 0;

}
void char_insert(char page[50], char c)
{
	int l = 0,i;
	for (l = 0; l<50; l++)
	{
		if (page[l] > c||page[l]=='\0')
		{
			for (i = 0; i < l; i++)
			{
				printf("%c", page[i]);
			}
			printf("%c", c);
			for (i = l; i < 50; i++)
			{
				printf("%c", page[i]);
			}
			break;
		}
		else
			continue;
	}
}