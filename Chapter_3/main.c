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
		//��i����5�󣬾�ִ?continue��ֱ������continue�Ĵ��룬ȥѭ�����жϵĵ�?
		//��Ϊ��?������i = i+1������i?ֱΪ5��������?����ѭ��
		printf("%d ", i);
		i = i + 1;
	}
	return 0;
}