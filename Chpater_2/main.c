#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//main函数也叫主函数

/**/

//int main()
//{
//	int a = 10;//创建整型类型的变量，名字叫a，并赋值为10
//
//	printf("abcdef\b");/*使用printf打印*/
//	//ab
//	return 0;
//}
//
//
//#include <stdbool.h>
//
//int main()
//{
//	_Bool flag = true;
//	bool flag2 = false;
//
//	if (flag)
//		printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);
//
//
//	return 0;
//}
//
//int main()
//{
//	/*int a = 10;
//	printf("%d\n", a);*/
//	printf("%zd\n", sizeof(_Bool));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    short s = 5;
//    int b = 10;
//
//    printf("%zd\n", sizeof(s = b + 1));
//
//    printf("s = %d\n", s);
//
//    return 0;
//}


//int main()
//{
//	//signed int --- 有符号的int
//	signed int num = 100;
//	num = -200;
//
//	//unsigned int
//	unsigned int num2 = 100;
//	num2 = 1000;
//
//	return 0;
//}
//

//int == signed int 是有符号的int
//对于有符号的整数打印应该使用%d
//
//对于无符号整数的打印应该使用%u
//

//int main()
//{
//	int num = -100;
//	printf("%u\n", num);
//	return 0;
//}
//

#include <stdbool.h>
//
//int num = 100;//全局变量 - 共享单车
//
//int main()
//{
//	//局部变量 - 你们家里的自行车
//	unsigned int age = 10;//初始化
//	age = 20;//赋值
//
//	printf("%u\n", age);
//	char ch = 'q';
//	float score = 3.14f;
//	double wegiht = 4.5;
//	bool flag = true;
//
//	return 0;
//}


//int main()
//{
//	{
//		int num = 10;
//		printf("%d\n", num);
//	}
//	printf("%d\n", num);//err
//
//	return 0;
//}
//
//int m = 1000;
//
//int main()
//{
//	int m = 100;
//	printf("%d\n", m);//局部优先
//
//	return 0;
//}

//
//int main()
//{
//	int m = 100;
//	printf("%d\n", m);
//	m = 200;
//	printf("%d\n", m);
//
//	return 0;
//}


//int main()
//{
//	//printf("%d\n", 33 + 42);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a + b);
//	printf("%d\n", a + 23);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 33 - 42);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a - b);
//	printf("%d\n", a - 23);
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n",5*5);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a * b);
//	printf("%d\n", a * 10);
//
//	return 0;
//}
//


//int main()
//{
//	printf("%d\n", 9 / 3);//3
//	printf("%d\n", 10 / 4);//2
//	printf("%f\n", 10 / 4.0);//2.5
//	printf("%f\n", 10.0 / 4);//2.5
//	printf("%f\n", 10.0 / 4.0);//2.5
//
//
//
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int score = 5;
//    score = (score / 20.0) * 100;
//    printf("%d\n", score);
//
//    return 0;
//}
//
//



//int main()
//{
//	printf("%d\n", 10 % 3);//10/3=3...1
//	//int n = 0;
//	//if(n%2 == 0)
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    printf("%d\n", 11 % -5); // 1
//    printf("%d\n", -11 % -5); // -1
//    printf("%d\n", -11 % 5); // -1
//    return 0;
//}
//
//int main()
//{
//	int a = 0;//初始化
//
//	a = 10;//赋值， = 是赋值操作符
//
//	return 0;
//}

//*= /= %=
//
//int main()
//{
//	int a = 0;//初始化
//	a = a + 10;
//	a += 10;//复合赋值
//
//	a = a - 3;//1
//	a -= 3;//2
//
//	a = a + 1;
//	a += 1;
//	a++;
//
//	return 0;
//}

//++ --

//int main()
//{
//	int a = 5;
//	//a = a + 1;//a自增1
//	//a++;
//	++a;
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = ++a;//a=6 b=6
//	//前置++
//	//口诀：先++，后使用
//	//a=a+1, b=a
//	//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = a++;//a=6 b=5
//	//后置++
//	//口诀：先使用，后++
//	//b=a, a=a+1
//	//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = a--;//a=4 b=5
//	//后置--
//	//口诀：先使用，后--
//	//b=a, a=a-1
//	//
//	printf("a = %d\n", a);//4
//	printf("b = %d\n", b);//5
//
//	return 0;
//}

//
//int main()
//{
//	int a = 5;
//	int b = --a;//a=4 b=4
//	//前--
//	//口诀：先--，后使用
//	//a=a-1, b=a
//	//
//	printf("a = %d\n", a);//4
//	printf("b = %d\n", b);//4
//
//	return 0;
//}
//

//int main()
//{
//	int a = 5;
//	//printf("%d\n", --a);
//	printf("%d\n", a--);//5
//	printf("%d\n", a);//4
//
//	return 0;
//}

//
//int main()
//{
//	int a = -10;
//	printf("%d\n", +10);
//	printf("%d\n", +a);
//	printf("%d\n", 10);
//
//	return 0;
//}


//int main()
//{
//	int a = -10;
//	printf("%d\n", -10);
//	printf("%d\n", -a);
//	printf("%d\n", 10);
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//
//	printf("%d\n", a);
//	//int b = int(3.14);//err
//	return 0;
//}

//int main()
//{
//	//printf("hello world");
//	//printf("hello world\n");
//	//abc
//	//def
//	printf("abc\ndef");
//
//	return 0;
//}
//


//int main()
//{
//	printf("%dabc\n", 100);
//	return 0;
//}
//
//int main()
//{
//	printf("%s will come tonight\n", "lisi");
//	printf("%s will come tonight\n", "wangwu");
//
//	return 0;
//}


//int main()
//{
//	printf("%s says it is %d o'clock\n", "lisi", 10);
//	printf("%s says it is %d o'clock\n", "cuihua", 24);
//
//	return 0;
//}


//int main()
//{
//	printf("this is %c\n", 'A');
//	return 0;
//}


//int main()
//{
//	printf("%hd\n", 100);
//	printf("%ho\n", 100);
//	printf("%x\n", 15);//0 1 2 3 4 5 6 7 8 9 a b c d e f 
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 123);
//	printf("%-5dxxxx\n", 123);
//	printf("%5d\n", 123456);
//
//
//	return 0;
//}


//int main()
//{
//	printf("%lf\n", 123.45);
//	printf("%12lf\n", 123.45);
//
//	
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 123); //123
//	printf("%d\n", -123);//-123
//
//	printf("%+d\n", 123); //+123
//	printf("%+d\n", -123);//-123
//
//
//	return 0;
//}

//int main()
//{
//	printf("%.2lf\n", 123.45);
//	printf("%.3lf\n", 123.45);
//	printf("%.1lf\n", 123.45);
//	printf("%12.1lf\n", 123.45);
//
//	printf("%*.*lf\n", 12, 1, 123.45);
//	printf("%*.*lf\n", 12, 3, 123.45);
//
//
//	return 0;
//}

//int main()
//{
//	printf("%s\n", "abcdef");
//	printf("%.3s\n", "abcdef");
//
//	return 0;
//}
//


//int main()
//{
//	int score = 0;
//	printf("请输入成绩:");
//	scanf("%d", &score);//输入操作
//	//scanf函数中占位符的后边的参数需要的是地址
//	//& 取地址操作符，&score - 取出score的地址
//	printf("成绩是 %d\n", score);
//
//	return 0;
//}
//
//


//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f1 = 0.0;
//	float f2 = 0.0;
//
//	scanf("%d %d %f %f", &a, &b, &f1, &f2);
//	printf("%d %d %f %f\n", a, b, f1, f2);
//
//	return 0;
//}
//


#include <stdio.h>

//int main()
//{
//    int x;
//    float y;
//
//    // 用户输入 "    -13.45e12# 0"
//    scanf("%d", &x);
//    printf("%d\n", x);
//    scanf("%f", &y);
//    printf("%f\n", y);
//    return 0;
//}


//int main()
//{
//    int x;
//    float y;
//
//    // 用户输入 "    -13.45e12# 0"
//    scanf("%d %f", &x, &y);
//    printf("%d %f\n", x, y);
//    return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int ret = scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
//
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", num);
//
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	scanf(" %c", &ch);
//	printf("xxxx%cyyyy\n", ch);
//
//	return 0;
//}


//int main()
//{
//	char arr[20] = { 0 };//数组
//	scanf("%s", arr);//arr是数组名，数组名是地址
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	char arr[5] = { 0 };//数组
//	scanf("%4s", arr);//arr是数组名，数组名是地址
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%d-%d-%d", &year, &month, &day);
//
//	printf("%d %d %d\n", year, month, day);
//
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//
//	scanf("%d%*c%d%*c%d", &year, &month, &day);
//
//	printf("%d %d %d\n", year, month, day);
//
//	return 0;
//}


//int main()
//{
//	int a;
//	printf("%d\n", a);
//
//	return 0;
//}
//int a;
//
//int main()
//{
//	printf("%d\n", a);
//
//	return 0;
//}
//


//int main()
//{
//	int num = -1;
//	if (num)
//		printf("hehe\n");
//
//
//	return 0;
//}

//int main()
//{
//	if (1 == 2)
//		printf("hehe\n");
//
//
//	return 0;
//}

//输入一个整数，判断是否为奇数

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断和输出
//	if (num % 2 == 1)
//		printf("%d是奇数\n", num);
//	
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断和输出
//	if (num % 2 == 1)
//		printf("%d是奇数\n", num);
//	else
//		printf("%d是偶数\n", num);
//
//	return 0;
//}

//输入一个年龄，>= 18岁就输出：成年，否则就输出：未成年
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//
//	return 0;
//}



//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("可以谈恋爱了\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("禁止谈恋爱\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//
//	//判断和输出
//	if (num == 0)
//		printf("输入的值是0\n");
//	else
//	{
//		if (num > 0)
//			printf("输入的值是正数\n");
//		else
//			printf("输入的值是负数\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//
//	//判断和输出
//	if (num == 0)
//		printf("输入的值是0\n");
//	else if (num > 0)
//		printf("输入的值是正数\n");
//	else
//		printf("输入的值是负数\n");
//	return 0;
//}

//
//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//
//	//判断和输出
//	if (num >= 0)
//	{
//		if (num == 0)
//			printf("输入的值是0\n");
//		else
//			printf("输入的值是正数\n");
//	}
//	else
//	{
//		printf("输入的值是负数\n");
//	}
//	return 0;
//}

//输入一个人的年龄
//如果年龄 < 18岁，打印"少年"
//如果年龄在18岁至44岁打印"青年"
//如果年龄在45岁至59岁打印"中老年"
//如果年龄在60岁至89岁打印"老年"
//如果90岁及以上打印"老寿星"

//
//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//
//	//判断和输出
//	if (age < 18)
//		printf("少年\n");
//	else //age>=18
//	{
//		if (age <= 44)//18~44
//			printf("青年\n");
//		else //>44
//		{
//			if (age <= 59) //45~59
//				printf("中老年\n");
//			else //>59
//			{
//				if (age <= 89)
//					printf("老年\n");
//				else//>89
//					printf("老寿星\n");
//			}
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//
//	//判断和输出
//	if (age < 18)
//		printf("少年\n");
//	else if (age <= 44)//18~44
//		printf("青年\n");
//	else if (age <= 59) //45~59
//		printf("中老年\n");
//	else if (age <= 89)
//		printf("老年\n");
//	else//>89
//		printf("老寿星\n");
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    }
//    return 0;
//}



int main()
{
	int a = 0;
	int num = 0;
	for (int i = 0; i < 10; i++)
	{

	}
	return 0;
}
