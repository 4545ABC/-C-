#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
int main()//������20233105425
{
	SetConsoleOutputCP(437);
	//unsigned char c1, c2;
	int c1, c2;//������䣬�ڸ�ʽ�����н�����ǿ��ת��
	c1 = 197;
	c2 = 198;
	/*����Ϊc1 = 197;
	c2 = 198;��ASCII����ж�Ӧ�ַ��ڼ�����ֿ��в�һ�����ڣ��޷���ʾ����char����
	����������-128��127֮�䣬197�����Ϊ��ֵ*/
	printf("c1=%c,c2=%c\n", c1, c2);
	printf("c1=%d,c2=%d\n", c1, c2);
	return 0;
}