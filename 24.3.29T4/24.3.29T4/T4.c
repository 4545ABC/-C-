#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
int main()//梁家齐20233105425
{
	SetConsoleOutputCP(437);
	//unsigned char c1, c2;
	int c1, c2;//结果不变，在格式控制中进行了强制转换
	c1 = 197;
	c2 = 198;
	/*若改为c1 = 197;
	c2 = 198;则ASCII码表中对应字符在计算机字库中不一定存在，无法显示，且char类型
	本身限制在-128到127之间，197溢出后为负值*/
	printf("c1=%c,c2=%c\n", c1, c2);
	printf("c1=%d,c2=%d\n", c1, c2);
	return 0;
}