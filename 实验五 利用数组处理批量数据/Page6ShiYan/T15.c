#include<stdio.h>
int main()
{
	char s1[100] = { 0 };
	char s2[50] = { 0 };
	int index1 = 0, index2 = 0;
	printf("�������ַ���s2��");
	scanf("%s", s2);

	printf("��s2������s1��, s1����Ϊ: ");

	// ��s2[index2]λ���ַ�������s1[index]λ�ã�
	// Ȼ����s1[index1]��ֵ��Ϊѭ�������ж��Ƿ񿽱���s2��ĩβ
	while (s1[index1++] = s2[index2++]);
	printf("%s\n", s1);
	return 0;
}
