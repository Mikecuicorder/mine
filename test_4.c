#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int input = 0;
	printf("�°�ؼ�>");
	printf("�Ƿ�Ҫ�������ȴ���У�(1/0):");
	scanf("%d", &input);
	if (input == 1)
		printf("�ΰ�����");
	else
		printf("��������");
	return 0;
}