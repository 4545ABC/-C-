#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()//Áº¼ÒÆë20233105425
{
	double d=300000, p=6000, r=0.01,m=0;
	m = log(p / (p - d * r)) / log(1 + r);
	m = (int)(m * 10 + 0.5);
	printf("%.1lf", m/10.0);
	return 0;

}