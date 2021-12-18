#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

is_prime(int x)
{
	int y = 0;
	for (y = 2; y < x; y++)
	{
		if (x % y == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for(i=1;i<=1000;i++)
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	printf("\n素数一共有:%d个\n", count);
	return 0;
}