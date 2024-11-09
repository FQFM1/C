#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	printf("Please input a number:");
	scanf("%d", &a);
	if (a % 2 == 1)
		printf("odd");
	else
		printf("even");
	return 0;
}

