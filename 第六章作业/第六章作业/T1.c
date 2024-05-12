#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
int main()
{
	char page[5000] = { '0' };
	int i,c, AlphaBat[26] = { 0 };
		gets(page);
	for (i = 0; i < 5000 && page[i] != '\0'; i++)
	{
		if (isupper(page[i]))
		{
			page[i] -= 'A';
		}
		else if (islower(page[i]))
		{
			page[i] -= 'a';
		}
		else
			continue;

		AlphaBat[(int)page[i]]++;
	}
	printf("%d", AlphaBat[0]);
	for (i = 1; i < 26; i++)
	{
		printf(",%d", AlphaBat[i]);
	}
	return 0;
	
}