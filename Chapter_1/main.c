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
//	char arr1[] = { 'a', 'b', 'c' };	//arr1�����д��3���ַ�
//	char arr2[] = "abc";				//arr2�����д���ַ���
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