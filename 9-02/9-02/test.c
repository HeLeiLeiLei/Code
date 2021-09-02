#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int Add(int x,int y){
//	return x + y;
//}
//
//int main(){
//
//	//int arr[5] = {1,2,3,4,5};
//	////数组的指针
//	//int* parr=arr;
//	//printf("%d", *(parr+1));
//
//	////指针数组
//	//int* arr[4];
//	////指针数组的指针
//	//int* (*parr)[4] = &arr;
//
//	//函数指针
//	int (*pAdd)(int, int) = Add;
//	//函数指针的数组
//	int(* pArr[4])(int, int);
//	//指向函数指针数组的指针
//	int(* (*ppArr)[4])(int,int)=&pArr;
//	
//	return 0;
//}

//int main(){
//	
//	int a = 10;
//	int* p = &a;
//	char* p2 = &a;//会报不兼容
//	void* p3 = &a;
//	//*(p3++);//err
//
//	return 0;
//}


struct MyStruct{
	char name[20];
	int age;
};

//void Bubble_sort(int arr[],int sz){
//	for (int i = 0; i < sz - 1;i++){
//		for (int j = 0;j<sz-1-i;j++){
//			if (arr[j] < arr[j+1]){
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//}

//void qsort(void* base,
//		   size_t num,
//		   size_t width,
//		   int( *cmp)(const void* e1,const void* e2)){
//
//}

int cmp_int(const void* e1, const void* e2){
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2){
	
	/*if (*(float*)e1 == *(float*)e2){
		return 0;
	}
	else if (*(float*)e1 > *(float*)e2){
		return 1;
	}
	else if(*(float*)e1 < *(float*)e2){
		return -1;
	}*/

	return (int)(*(float*)e1 - *(float*)e2);
}

int cmp_struct_by_age(const void* e1,const void* e2){
	return ((struct MyStruct*)e1)->age - ((struct MyStruct*)e2)->age;
}

int cmp_struct_by_name(const void* e1,const void* e2){
	return strcmp(((struct MyStruct*)e1)->name, ((struct MyStruct*)e2)->name);
}

void test1(){
	int arr[10] = { 9, 1, 2, 6, 7, 5, 3, 4, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
}

void test2(){
	//float数组
	float fl[5] = { 5.0, 3.0, 4.0, 1.0, 2.0 };
	int sz = sizeof(fl) / sizeof(fl[0]);
	qsort(fl, sz, sizeof(fl[0]), cmp_float);
	for (int i = 0; i < 5; i++){
		printf("%f ", fl[i]);
	}
}

void test3(){
	//结构体数组
	struct MyStruct s[3] = { { "AA", 18 }, { "BB", 11 }, { "CC", 12 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_struct_by_age);
	
}

void test4(){
	struct MyStruct s[3] = { { "CC", 18 }, { "AA", 11 }, { "BB", 12 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_struct_by_name);
}

int main(){
	//Bubble_sort(arr,sz);

	//test1();
	//test2();
	//test3();
	test4();
	
	return 0;
}