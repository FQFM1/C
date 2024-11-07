#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c ", i);
//		if (i % 16 == 15)
//			printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[] = { 'a', 'b', 'c' };	//arr1数组中存放3个字符
//	char arr2[] = "abc";				//arr2数组中存放字符串
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


int main()
{
	char arr1[] = { 'a', 'b', 'c', '\0' };
	char arr2[] = "abc";
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", "abc\0def");
	return 0;
}