#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char* inverse(char x[],int);
int main()
{
	char string[100] = { 0 },*p;
	int len;
	gets(string);
	len=strlen(string);
	p=inverse(string,len);
	printf("inverse string:");
		printf("%s", p);
	return 0;
}
char* inverse(char x[],int len)
{
	static char instring[100]={0};
	int i;
	for (i = 0; len!=0; i++, len--)
		instring[i] = x[len-1];
	return instring;
}