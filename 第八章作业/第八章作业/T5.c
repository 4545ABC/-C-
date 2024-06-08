#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char txts[50] = { 0 };
	int p, q;
	gets(txts);
	for (q = 0; txts[q] != 0; q++);
	for (p = 0,q-=1; p != q; p++, q--)
	{
		if (txts[p] != txts[q])
		{
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}