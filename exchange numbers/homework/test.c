#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void fun1(int* x, int* y)
 {
		 for (int i = 0; i < 10; i++, x++, y++) 
		 {
			 *x = *x ^ *y;
			 *y = *x ^ *y;
			 *x = *x ^ *y;
		 }
}
 void fun2(int* a) {
	 for (int i = 0; i < 10; i++, a++) {
		 printf("%d\t", *a);
	 }
	 printf("\n");
 }
 void main() {
	 int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	 int b[10] = { 7, 6, 5, 2, 4, 1, 2, 3, 2 ,2  };
	 printf("原数组a:\t");
	 fun2(a);
	 printf("\n原数组b:\t");
	 fun2(b);
	 fun1(a, b);
	 printf("\n交换后数组a\t:");
	 fun2(a);
	 printf("\n交换后数组b\t:");
	 fun2(b);
	 system("pause");
 }
