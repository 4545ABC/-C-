#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double s,area;
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	s = 0.5 * (a + b + c);
	area = s * (s - a) * (s - b) * (s - c);
	printf("%.3lf", sqrt(area));
	return 0;
}
