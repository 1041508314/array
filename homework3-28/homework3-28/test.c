#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void menu()
{
	printf("****************************************\n");
	printf("***************1.��ʼ������*************\n");
	printf("***************2.��������***************\n");
	printf("***************3.�������***************\n");
	printf("***************4.��   �� **************\n");
	printf("****************************************\n");
}
void init(int a[])           
{
	int i = 0;
	printf("������ʮ����:");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("��ʼ��������Ϊ:");
	for (i = 0; i < 10; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n�����ʼ���ɹ�!\n");
	printf("\n");
}
void reverse(int a[])           
{
	int i = 0;
	printf("���ú������Ϊ:");
	for (i = 9; i >= 0; i--)
	{
		printf("%4d", a[i]);
	}
	printf("\n�������!\n");
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
	printf("\n������!\n");
	printf("\n");
}
int main()
{
	int arr[10];                
	int num = 1;               
	while (num)
	{
		menu();
		printf("����������ѡ��:");
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