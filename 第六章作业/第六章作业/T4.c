#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    unsigned int m, k, a, i;
    scanf("%u", &a);
    for (i = 0; i < a;i++)
    {
        for (k = 0; k <= i; k++)
            printf("%6d", Fact(i) / (Fact(i - k) * Fact(k)));
        printf("\n");
    }
    return 0;
}

int Fact(int x)
{
    int i;
    long int s = 1;
    for (i = 1; i <= x; i++)
        s = s * i;
    return s;
}