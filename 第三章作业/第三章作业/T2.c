#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char num;
	scanf("%c", &num);
	printf("%c %c %c\n", num - 1, num, num + 1);
	printf("%d %d %d", num - 1, num, num + 1);
	return 0;
}
