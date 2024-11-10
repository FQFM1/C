#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	printf("Please input a number:");
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("odd");
//	else
//		printf("even");
//	return 0;
//}

//int main()
//{
//int i = 1;
//do
//{
//printf("%d ", i);
//i = i + 1;
//}while(i<=10);
//return 0;
//}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		//当i等于5后，就执?continue，直接跳过continue的代码，去循环的判断的地?
		//因为这?跳过了i = i+1，所以i?直为5，程序陷?和死循环
		printf("%d ", i);
		i = i + 1;
	}
	return 0;
}