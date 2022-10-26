#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char arr1[] = "abcshd";
//	char arr2[] = { 'o','p','z',"\0"};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//
//}
//
// 
// 
// {
//	int input = 0;
//	printf("first chooce\n(1/0) >:");
//	scanf("%d", &input);
//	if (input == 1)
//	printf("1\n");
//	else
//		printf("2\n");
//	return 0;
//
//	
//}
//{
//	int line = 0;
//	printf("0\n");
//	while(line<200000)
//	{
//		printf("ËÕËÕ½´£¬%d\n",line);
//		line++;
//	}if (line >= 200000);
//	printf("¿É°®Äó\n");
//	return 0;
//}

//{
//	int t=1;
//	while (t <= 100)
//	{
//		if (1 == t % 2)
//		   printf("%d\n",t); 
//		t++;
//	}
//	return 0;
//
//}
//{
//	int t = 0;
//	scanf("%d", &t); 
//	if (1 == t % 2)
//		   printf("ÆæÊý\n"); 
//
//	return 0;
//}
{
	int t = 0;
	int a = 0;
	int m = 1;
	scanf("%d", &t);
	for (a = 1; a <= t; a++)
	{
		m = m*a ;
	}
	printf("%d\n", m);
	return 0;
}