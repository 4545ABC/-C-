#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	scanf("%d", &a);
	int loop(int);
	a = loop(a);
	printf("%d", a);
	return 0;
}
int loop(int a)
{
	int*c,i,j=1,k=0;
	c = malloc(a * sizeof(_Bool));
	for (i = 0; i < a; i++)
		c[i] = 1 ;
    for (i = 1; i < 4; i = i % 3 + 1)
    {
        if (3 == i && c[j] != 0)
        {
            c[j] = 0;
            k++;
            if (a - 1 == k)
                break;
            j = (j + 1) % a;
            continue;
        }
        if (0 == c[j])
        {
            j = (j + 1) % a;
            i--;
            continue;
        }
        j = (j + 1) % a;
    }
	for (i = 0; i < a; i++)
		if (c[i] == 1)
			c[0] = i;
	return c[0];
}