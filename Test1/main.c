#define _CRT_SECURE_NO_WARNINGS 1


///* 打印1~100之间的奇数 */
//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		if(i % 2 == 1)	// 判断奇数
//			printf("%d ", i);
//	}
//	return 0;
//}


///* 打印9*9乘法⼝诀表 */
//#include <stdio.h>
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


///* 打印素数 */
//#include <stdio.h>
//int main()
//{
//	for (int num = 100; num <= 200; num++)
//	{
//		int flag = 1;
//		for (int i = 2; i < num; i++)
//		{
//			if (num % i == 0)
//			{
//				flag = 0;
//				break;	
//			}			
//		}
//		if(flag == 1)
//			printf("%d ", num);		
//	}
//	return 0;
//}


///* 判断三角形 */
//#include <stdio.h>
//int main()
//{
//	while (1)
//	{
//		int a = 0, b = 0, c = 0;
//		scanf("%d %d %d", &a, &b, &c);
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//				printf("等边三角形");
//			else if (a == b || b == c || a == c)
//				printf("等腰三角形");
//			else
//				printf("普通三角形");
//		}
//		else
//		{
//			printf("不是三角形");
//		}
//	}
//	return 0;
//}


/* 计算最⼤公约数 */
#include <stdio.h>
int main()
{

	return 0;
}