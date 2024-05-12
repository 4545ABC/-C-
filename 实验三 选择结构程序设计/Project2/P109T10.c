#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	int x;
	double money1,money,y;
	scanf("%lf", &money1);
	//if°æ
	/*if (money1 <= 100000)
		y = money1 * 0.1;
	else if (money1 <= 200000)
		y = (money1 - 100000) * 0.075 + 10000.0;
	else if (money1 <= 400000)
		y = (money1 - 200000) * 0.05 + 17500.0;
	else if (money1 <= 600000)
		y = (money1 - 400000) * 0.03 + 27500.0;
	else if (money1 <= 1000000)
		y = (money1 - 600000) * 0.015 + 33500.0;
	else
		y = (money1 - 1000000) * 0.01 + 39500.0;*/
	//switch°æ
	if (money1 <= 100000)
		x = 1;
	else if (money1 <= 200000)
		x = 2;
	else if (money1 <= 400000)
		x = 3;
	else if (money1 <= 600000)
		x = 4;
	else if (money1 <= 1000000)
		x = 5;
	else
		x = 6;
	double x1, x2, x3, x4, x5, x6;
	x1 = x2 = x3 = x4 = x5 = x6 = 0;
	switch (x)
	{	
	case 6:x6 = (money1 - 10000000) * 0.01; money1 =10000000;
	case 5:x5 = (money1 - 600000) * 0.015; money1 =600000;
	case 4:x4 = (money1 - 400000) * 0.03; money1 =400000;
	case 3:x3 = (money1 - 200000) * 0.05; money1 =200000;
	case 2:x2 = (money1 - 100000) * 0.075; money1 =100000;
	case 1:x1 = money1 * 0.1;
	}
	money = x1 + x2 + x3 + x4 + x5 + x6;
	//printf("%.2lf\n", y);
	printf("%.2lf\n",money);
	return 0;
}