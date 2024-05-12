#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int UserName = 1123, PassWord = 132546,x,y;
	printf("请输入您的用户名：");
	scanf("%d", &x);
	printf("请输入您的密码：");
	scanf("%d", &y);
	if (UserName != x || PassWord != y)
		printf("您的用户名或密码错误！");
	else
		printf("您是合法用户，已进入系统！");
	return 0;
}


