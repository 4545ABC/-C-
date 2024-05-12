#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, x1=0, x2=0,disc=0,realpart=0,imagpart=0;
	scanf("%lf,%lf,%lf", &a, &b, &c);
	if (a == 0)
	{
		if (b == 0)
			printf("非方程");
		else
		{
			x1 = -c / b;
		}
	}
	else
	{
		disc = b * b - 4 * a * c;
		if (disc >= 0)
		{
			if (disc > 0)
			{
				x1 = (-b + sqrt(disc)) / 2 * a;
				x2 = (-b - sqrt(disc)) / 2 * a;
				printf("x1=%lf,x2=%lf", x1, x2);
			}
			else
			{
				x1 = -b / (2 * a);
				printf("x=%lf", x1);
			}	

		}
		else
		{
			realpart = -b / (2 * a);
			imagpart = sqrt(-disc) / (2 * a);
			printf("x1=%lf+%lfi,x2=%lf-%lfi", realpart, imagpart, realpart, imagpart);
		}

	}
	return 0;
}


