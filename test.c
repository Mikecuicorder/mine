#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	enum Sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n",FEMALE);
	printf("%d\n", SECRET);
	return 0;
}