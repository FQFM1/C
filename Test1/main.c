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
//#include <stdio.h>
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//	// 因为最⼤公约数最⼤是m和n的较⼩值
//	int k = (m > n ? n : m);
//	while (1)
//	{
//		// 每次拿k试除m和n，如果不能同时整除，则k--，继续试除
//		if (m % k == 0 && n % k == 0)
//		{
//			break;
//		}
//		// k的值减⼀,对下⼀个数进⾏判断
//		k--;
//	}
//	printf("%d\n", k);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	// 18 24
//	// 辗转相除法
//	int k = 0;
//	// 算法实现
//		while (k = m % n)
//		{
//			m = n;
//			n = k;
//		}
//	printf("%d\n", n);
//	return 0;
//}


///* 打印最⼩公倍数 */
//#include <stdio.h>
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//	int k = (m > n ? m : n);
//	while (1)
//	{
//		if (k % m == 0 && k % n == 0)
//		{
//			printf("%d\n", k);
//			break;
//		}
//		k++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	// 输⼊
//	scanf("%d %d", &m, &n);
//	//18 24
//	int k = 0;
//	int mul = m * n;
//	// 辗转相除法求得最⼤公约数
//	while (k = m % n)
//	{
//		m = n;
//		n = k;
//	}
//	printf("%d\n", mul / n);
//	return 0;
//}


///* 分数求和 */
//#include <stdio.h>
//int main()
//{
//	float s = 0;
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 2 == 0)
//			s = s - 1.0 / a;
//		else
//			s = s + 1.0 / a;
//	}
//	printf("%f", s);
//	return 0;
//}


///* 计算最⼤值和最⼩值的差值 */
//#include <stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	int temp = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);	// 数组也要加取地址符
//	}
//	int i = 0, j = 0;
//	for (i = 0; i < 10 - 1; i++)	// 冒泡排列
//	{
//		for (j = 0; j < 10 - 1 - i; j++)	// 对未排序元素执行冒泡排列
//		{
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	printf("%d", a[9] - a[0]);
//	return 0;
//}
//// 当嵌套循环执行时，外部循环的每次循环中，内部循环都会完整执行一次。内部循环的执行次数取决于外部循环的循环次数。


///* 排序整形数组 */
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int temp = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


/* 找出盗窃者 */
#include <stdio.h>
int main()
{

	return 0;
}