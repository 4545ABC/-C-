#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
int main()
{
	char pages[1000] = { '\0'};
	int a=0, b=0, c=0, d=0, e=0,i;
	gets(pages);
	for (i = 0; i < 1000 && pages[i] != 0; i++)
	{
		if (isupper(pages[i]) == 1)
			a++;
		else if (pages[i]>=97&&pages[i]<=122)
			b++;
		else if (pages[i]==32)
			c++;
		else if (pages[i]>=48&&pages[i]<=57)
			d++;
		else 
			e++;
	}
	printf("upper case:%-5dlower case:%-5dspace:%-5ddigit:%-5dother:%-5d", a, b, c, d, e);
	return 0;

}