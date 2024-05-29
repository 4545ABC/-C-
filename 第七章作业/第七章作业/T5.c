#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
long double Legendre(double, double);
int main()
{
	double a,b;
	scanf("%lf %lf", &a, &b);
	printf("%.2llf", Legendre(a, b));
	return 0;
}
long double Legendre(double a, double b)
{
	switch ((int)a)
	{
	case 0:return 1;
	case 1:return b;
	default:return (2.0 * a - 1) / a * b * Legendre(a - 1, b) - (a - 1) / a * Legendre(a - 2, b);
		break;
	}
}
