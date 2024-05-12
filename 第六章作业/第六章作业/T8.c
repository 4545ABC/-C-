#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a, b, i;
	char Num1[50] = { 0 }, Num2[50] = { 0 };
	scanf("%s", Num1);
	scanf("%s", Num2);
	a = strlen(Num1);
	b = strlen(Num2);
	for (i = 0; i < a + b; i++)
	{
		Num1[a + i] = Num2[i];
	}
	printf("%s", Num1);
	return 0;
}