#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main(){
//	double d = 1E10; //1.0*10的10次方
//	printf("%lf\n",d);
//	return 0;
//}

//int main(){
//
//	//float fl = 5.5;
//	//101.1
//	// (-1)^0 * 1.011 * 2^2
//	//在32位操作系统中存储浮点数 地址最高位是符号位 E占8个bit位 M占23个bit位
//	//S=0
//	//M=1.011  M在内存中存储的时候 小数点前面一位不往内存中存储
//	//E=2  每个E在存储的时候都要加127  所以E=2在内存中存储的是 2+127=129
//	//0 10000001 01100000000000000000000
//	//01000000101100000000000000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40 B0 00 00
//	//0x12ffcc0 00 00 B0 40
//
//	//5.0
//	//101.0
//	//s=（-1）^0 1.01*2^2  E=2
//
//	//9.0
//	//1001.0   1.001*2^3
//	//s=0  M=1.001 E=3
//	//
//}

//int main()
//{
//	int n = 9;
//	//0000 0000 0000 0000 0000 0000 0000 1001
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n", n);//9
//	//0 00000000 00000000000000000001001
//	//(-1)^0 * 0.00000000000000000001001 * 2^0-127=0.00000000000000...
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//	//1001.0
//	//S=0 M=1.001 E=3
//	//0 10000010 00100000000000000000000
//
//	//01000001000100000000000000000000
//	printf("num的值为：%d\n", n);//1,091,567,616
//
//	//0 10000010 00100000000000000000000
//	//(-1)^0 * 1.001 * 2^130-127 = 1001.0
//	printf("*pFloat的值为：%f\n", *pFloat);//9.000000
//
//	return 0;
//}

//int main(){
//	
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	//if (arr1 == arr2){
//	//	printf("haha");
//	//}
//	//else{
//	//	printf("hehe");
//	//}
//	////输出hehe 俩个数组 开辟的内存空间不一样
//
//	if (p1 == p2){
//		printf("haha");
//	}
//	else{
//		printf("hehe");
//	}
//	//输出haha 俩个指针指向同一个变量  不需要重复开辟内存 所以所指的地址是一样的
//	return 0;
//}

//int main(){
//
//	//int arr[10] = {0};//整形数组
//	//char arr[4] = "abc";//字符数组
//	//int* arr[7];//存放整形指针的指针数组 - 指针数组
//	//char* arr[4];//存放字符类型的指针数组 - 指针数组
//	
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[] = {&a,&b,&c,&d};
//	int i = 0;
//	for (i = 0; i < 4;i++){
//		printf("%d \n",*(arr[i]));
//	}
//
//	return 0;
//}

//int main(){
//	
//	int arr1[] = { 1 ,2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 5 };
//	int arr3[] = { 3, 2, 3, 4, 5 };
//	int* parr[] = {arr1,arr2,arr3};
//	int i = 0;
//	for (i = 0; i < 3;i++){
//		int j = 0;
//		for (j = 0; j < 5;j++){
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main(){
//	
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	int arr2[10] = {0};
//	int (*p)[10]=&arr2;
//
//	return 0;
//}


//int main(){
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int(*p)[10] = &arr;
//	int i = 0;
//	/*for (i = 0; i < 10;i++){
//		printf("%d ",(*p)[i]);
//	}*/
//	for (i = 0; i < 10; i++){
//		printf("%d ", *(*p+i));
//	}
//}

//方法一
//void print1(int* arr, int x, int y){
//
//	int i = 0;
//	for (i = 0; i < x; i++){
//		int j = 0;
//		for (j = 0; j < y;j++){
//			printf("%d ", *((arr + i)+j));
//		}
//		printf("\n");
//	}
//
//}
//方法二
//void print1(int arr[3][5], int x, int y){
//	
//	int i = 0;
//	for (i = 0; i < x;i++){
//		int j = 0;
//		for (j = 0; j < y;j++){
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}

void print1(int (*p)[5], int x, int y){

	int i = 0;
	for (i = 0; i < x; i++){
		int j = 0;
		for (j = 0; j < y; j++){
			printf("%d ", (*p+i)[j]);
		}
		printf("\n");
	}

}

int main(){

	int arr[3][5] = { {1,2,3,4,5}, {4,5,6,7,8}, {3,4,5,6,7} };
	print1(arr,3,5);
	return 0;
}

//int arr[5];  arr是一个数组 里面有五个元素
//int* parr1[10]; parr1 是一个指针数组 里面有10个元素 每个元素都指向不同数组的第一位的地址（指针）
//int (*parr2)[10]; parr2 是一个指针 指向了一个数组 数组有10个元素 每个元素是int parr2是数组指针
//int (*parr3[10])[5] parr3 是一个数组 里面有10个指针 每个指针指向10个数组 每个数组有5个元素
//    