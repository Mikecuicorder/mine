#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int input = 0;
	printf("下班回家>");
	printf("是否要和凉三喝大酒切？(1/0):");
	scanf("%d", &input);
	if (input == 1)
		printf("肝癌警告");
	else
		printf("长命百岁");
	return 0;
}