#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int day = 0;
	int a[10] = { 0 };
	a[9] = 1;
for (day = 9; day > 0; day--)
{
	a[day - 1] = (a[day] + 1) * 2;
}
	printf("total=%d", a[0]);
	return 0;
}