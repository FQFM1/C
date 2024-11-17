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


/* ⾃幂数 */
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int num = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, j = 0;
//	for (int i = 1; i <= 100000; i++)
//	{
//		a = i % 10;
//		b = i / 10 % 10;
//		c = i / 10 / 10 % 10;
//		d = i / 10 / 10 / 10 % 10;
//		e = i / 10 / 10 / 10 / 10 % 10;
//		f = i / 10 / 10 / 10 / 10 / 10 % 10;
//
//		if (b == 0 && c ==0 && d == 0 && e == 0 && f == 0)
//			j = 1;
//		else if (c == 0 && d == 0 && e == 0 && f == 0)
//			j = 2;
//		else if (d == 0 && e == 0 && f == 0)
//			j = 3;
//		else if (e == 0 && f == 0)
//			j = 4;
//		else if (f == 0)
//			j = 5;
//		else
//			j = 6;
//
//		if (pow(a, j) + pow(b, j) + pow(c, j) + pow(d, j) + pow(e, j) + pow(f, j) == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100000; i++)
//	{
//		//判断i是否是⾃幂数
//		//1. 计算i的位数n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)	// while (tmp / 10 > 1)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2. 计算i的每⼀位的n次⽅之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3. 输出
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


///* 打印菱形 */
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	//输⼊
//	scanf("%d", &n);
//	//打印
//	//打印上半部分的n⾏
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//打印下半部分的n-1⾏
//	for (i = 0; i < n; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


///* 喝多少瓶汽⽔ */
//#include <stdio.h>
//int main()
//{
//	int n = 0, total = 0, empty = 0;
//	scanf("%d", &n);
//	total = total + n;
//	empty = empty + n;
//	while (empty >= 2)
//	{
//		total = total + empty / 2;	// 每次将剩余的空瓶⼦ empty 除以 2，表⽰可以换取的汽⽔数量，将这些汽⽔数量加到 total 中。
//		empty = empty / 2 + empty % 2;	// 将剩余的空瓶⼦ empty 除以 2 取余数，计算空瓶⼦换了汽⽔后有没有轮空的空瓶⼦。
//	}
//	printf("%d\n", total);
//	return 0;
//}


///* 字符转换 */
//#include <stdio.h>
//int main()
//{
//	char a[30];
//	scanf("%s", &a);
//	for (int i = 0; i < 30; i++)
//	{
//		if (a[i] >= 65 && a[i] <= 90)	// 大写字母
//			a[i] = a[i] + 32;
//		else if (a[i] >= 97 && a[i] <= 122)	// 小写字母
//			a[i] = a[i] - 32;
//	}
//	printf("%s", a);
//	return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	char buf[31] = { 0 };
//	//输⼊字符串
//	scanf("%[^\n]s", buf);
//	int i = 0;
//	while (buf[i])
//	{
//		//判断当前字符是否为⼩写字⺟
//		if (islower(buf[i]))
//			buf[i] = toupper(buf[i]);
//		//判读那当前字符是否为⼤写字⺟
//		else if (isupper(buf[i]))
//			buf[i] = tolower(buf[i]);
//		i++;
//	}
//	printf("%s\n", buf);
//	return 0;
//}


///* 交换两个整数 */
//#include <stdio.h>
//int Swap(int* pa, int* pb)	// 传入两个整型指针，进行交换
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//int main()
//{
//	int x = 0, y = 0;
//	scanf("%d %d", &x, &y);
//	Swap(&x, &y); // 将需要交换值的两个整数变量的地址作为参数传递给函数，进⾏交换
//	printf("%d %d", x, y);
//	return 0;
//}


///* 求两个整数的平均值 */
//#include <stdio.h>
//int average(int a, int b)
//{
//	int avg = a + (b - a) / 2;		// 防止溢出 int avg = (a + b) / 2;
//	return avg;
//}
//
//int main()
//{
//	int m = 0, n = 0, x = 0;
//	scanf("%d %d", &m, &n);
//	x = average(m, n);
//	printf("%d", x);
//	return 0;
//}


///* 求字符串⻓度 */
//#include <stdio.h>
//int Strlen(const char* str)
//{ //定义变量计数
//	int count = 0;
//	//利⽤指针遍历字符串
//	while (*str)
//	{
//		//计数加⼀
//		count++;//字符串指针后移，遍历下⼀个字符
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[30];
//	scanf("%s", arr);
//	int a = Strlen(arr);
//	printf("%d", a);
//	return 0;
//}


// 求字符串⻓度【进阶版】
#include <stdio.h>
int Strlen(const char* str)		// 递归
{
	if (*str == '\0')
		return 0;
	else
		//返回1加后⾯⼦字符串的和
		return 1 + Strlen(str + 1);
}

int main()
{
	char arr[30];
	scanf("%s", arr);
	int a = Strlen(arr);
	printf("%d", a);
	return 0;
}