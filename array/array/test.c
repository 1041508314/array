#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]= %p\n ",i,j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//ð������ �������ڵ�Ԫ�رȽ�һ��

void Bubblesort(int arr[],int sz)
{
	
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}

}
void PrintArr(int* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArr(arr,sz);
	Bubblesort(arr,sz);
	PrintArr(arr,sz);
	return 0;
}



//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
	//��������ʲô
	//��������������Ԫ�صĵ�ַ
	//ע�⣺����������
	//1.sizeof(arr) - size(������)- ����������������
	//sizeof�������������������������Ĵ�С����λ���ֽ�
	//2.&arr - &������ -��������ʾ�������飬&������ȡ��������������ĵ�ַ
	/*printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	printf("%p\n", &arr);
	return 0;
}*/