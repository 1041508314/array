#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void menu()
{
	printf("****************************************\n");
	printf("***************1.初始化数组*************\n");
	printf("***************2.逆置数组***************\n");
	printf("***************3.清空数组***************\n");
	printf("***************4.结   束 **************\n");
	printf("****************************************\n");
}
void init(int a[])           
{
	int i = 0;
	printf("请输入十个数:");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("初始化后数组为:");
	for (i = 0; i < 10; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n数组初始化成功!\n");
	printf("\n");
}
void reverse(int a[])           
{
	int i = 0;
	printf("逆置后的数组为:");
	for (i = 9; i >= 0; i--)
	{
		printf("%4d", a[i]);
	}
	printf("\n逆置完成!\n");
	printf("\n");
}
void empty(int a[])            
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		a[i] = 0;
		printf("%4d", a[i]);
	}
	printf("\n清空完成!\n");
	printf("\n");
}
int main()
{
	int arr[10];                
	int num = 1;               
	while (num)
	{
		menu();
		printf("请输入您的选项:");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			init(arr);       
			break;
		case 2:
			reverse(arr);      
			break;
		case 3:
			empty(arr);         
			break;
		case 4:
			return 0;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}