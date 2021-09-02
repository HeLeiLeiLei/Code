#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main(){
//
//	//字符指针
//	char ch = 'w';
//	char* pch = &ch;
//	const char* p2 = "abcdefg";
//
//	//指针数组 数组 存放指针的数组
//	int* arr[] = {0};
//	char* arr2[5];
//	
//	//数组指针-指向数组的指针
//	//int* p3;整形指针
//	//char* p4;字符指针
//
//	int arr5[5];
//	int (*p)[5]=&arr5;//指针数组 p是一个指针 指向一个数组 数组里有5个元素 每个元素都是int类型
//	return 0;
//}

//数组参数 指针参数
//void test1(int arr[3][5]){
//
//}ok
//void test1(int arr[][5]){
//
//}ok
//void test2(int arr[][]){
//
//}no

//void test3(int* arr ){//err
//	
//}
//void test4(int** p){//err
//
//}
//void test5(int (*p)[5]){
//
//}
//int main(){
//	
//	int arr[3][5] = {0};
//	//test(arr1);//二维数组传参
//	//test(arr2);
//	//test3(arr);
//	//test4(arr);
//	test5(arr);
//	return 0;
//
//	return 0;
//}

//数组指针-指向数组的指针
//函数指针-指向函数的指针 存放函数地址的一个指针
//int Add(int x,int y){
//	return x + y;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	//Add(a,b);Add 和 &Add 是一样的性质 都是函数的地址
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//	int(*p2)(int, int) = Add;
//	int(*p)(int, int) = &Add;
//	printf("%d\n",(*p2)(2,3));
//	printf("%d\n", (*p)(3, 3));
//	return 0;
//}

//void Print(char* str){
//	printf("%s\n",str);
//}
//int main(){
//	/*char wa = 'a';
//	char* pwa = &wa;
//	printf("%c\n", wa);
//	printf("-----\n", wa);
//	Print(pwa);*/
//	//char arr[] = "abcde";
//	void (*p)(char* )=Print;
//	(*p)("abcd");
//	
//	return 0;
//}
//void(*signal(int, void(*)(int)))(int);
////化简
//typedef void(*pfun_t)(int)
//pfun_t signal(int, pfun_t);
//首先 signal 它是一个函数声明 他有两个参数 第一个参数是int 第二个是函数指针 指向的函数参数是int 返回类型是void
//signal函数的返回类型也是一个指针函数 指向的函数参数是int 返回类型是void

//int Add(int x,int y){
//	return x + y;
//}
//int Sub(int x, int y){
//	return x - y;
//}
//int Mul(int x, int y){
//	return x * y;
//}
//int Div(int x, int y){
//	return x / y;
//}
//
//int main(){
//	//int* arr[10];//这是一个数组 有10个元素 每个元素都是一个指针
//	///int (*p)(int,int)=Add;//这式一个函数指针 指向函数的指针 那么函数指针数组怎么写呢
//	int(* p[4])(int, int) = {Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0; i < 4;i++){
//		printf("%d\n", p[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}
//
//char* my_strcopy(char* dest,const char* src){
//
//}
//int main(){
//	//1.写一个函数指针pf 能够指向my_strcopy
//	char* (*pf)(char*,const char*) = my_strcopy;
//	//2.写一个函数指针数组pfarr 能够存放my_strcopy 函数的地址
//	char* (*pfarr[4])(char*,const char*) = { my_strcopy};
//}

//函数指针数组示范案例 -- 转移表
//计算器
//void menu(){
//	printf("***************************\n");
//	printf("****  1、Add  2、Sub  *****\n");
//	printf("****  3、Mul  4、Div  *****\n");
//	printf("********* 0、exit *********\n");
//	printf("***************************\n");
//}
//
//int Add(int x,int y){
//	return x + y;
//}
//int Sub(int x, int y){
//	return x - y;
//}
//int Mul(int x, int y){
//	return x * y;
//}
//int Div(int x, int y){
//	return x / y;
//}
//
//void Colo(int (*pf)(int,int)){
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main(){
//	int input=0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请输入选择:>");
//		scanf("%d",&input);
//	
//		switch (input)
//		{
//		case 1:
//			Colo(Add);
//			break;
//		case 2:
//			Colo(Sub);
//			break;
//		case 3:
//			Colo(Mul);
//			break;
//		case 4:
//			Colo(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main(){
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请输入选择:>");
//		scanf("%d", &input);
//		int(*pfarr[])(int, int) = {0, Add, Sub, Mul, Div };
//		int x = 0;
//		int y = 0;
//		if (input>=1 && input<=4){
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("%d \n", ret);
//		}
//		else if(input == 0){
//			printf("退出\n");
//			break;
//		}
//		else{
//			printf("输入错误\n");
//		}
//		
//	} while (input);
//
//	return 0;
//}
//int main(){
//	int input=0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请输入选择:>");
//		scanf("%d",&input);
//	
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

int Add(int x,int y){
	return x + y;
}

//int main(){
//	
//	int arr[4];
//	int (*p)[4] = arr;//数组指针
//
//	int (*pf)(int, int) = Add;//函数指针   那么 函数指针数组的函数指针怎么写
//	int(*pfarr[4])(int, int); //函数指针数组
//	int(*(*ppfarr)[4])(int, int) = &pfarr;//函数指针数组的函数指针
//	//ppfarr 是一个指针 指向一个数组(函数指针数组) 数组里有4个元素
//	//每个元素都是函数指针int(* )(int,int)
//	return 0;
//}


//回调函数
//void Print(char* str){
//	printf("%s\n",str);
//}
//
//
//void test(void (*p)(char*)){
//	printf("test\n");
//	p("hello world");
//}
//int main(){
//
//	test(Print);
//	return 0;
//}


void BubbleSort(int arr[],int sz){
	for (int i = 0; i < sz;i++){
		for (int j = 0; j<sz-i-1;j++){
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(){

	//实现冒泡函数
	int arr[] = {5,9,8,3,10,2,6,7,4,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr,sz);
	for (int n = 0; n < sz; n++){
		printf("%d ", arr[n]);
	}
	return 0;
}