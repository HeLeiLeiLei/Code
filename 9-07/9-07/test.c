#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//void remo(int* parr,int sz){
//	
//	int* left = parr;
//	int* right = parr + sz - 1;
//	
//	while (left<right)
//	{
//		while ((left<right) && (*left % 2 == 1)){
//			left++;
//		}
//		while ((left<right) && (*right % 2 == 0))
//		{
//			right--;
//		}
//		if (left<right){
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//			right--;
//		}
//	}
//}
//
//int main(){
//	
//	int arr[] = {1,2,3,4,5,6,7,9,9,10};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	remo(arr,size);
//	for (int i = 0; i < size;i++){
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//5位运动选手参加了10米跳水比赛，有人让他们预测比赛结果
//A选手说:B第二，我第三
//B选手说:我第二，E第四
//C选手说:我第一，D第二
//D选手说:C最后，我第三
//E选手说:我第四，A第一
//比赛结束，每位选手都说对了一半，请编程实现
//int main(){
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 0; a <= 5; a++){
//		for (b = 0; b <= 5; b++){
//			for (c = 0; c <= 5; c++){
//				for (d = 0; d <= 5; d++){
//					for (e = 0; e <= 5; e++){
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) && 
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1)
//							){
//							if (a*b*c*d*e==120)
//								printf("a=%d b=%d c=%d d=%d e=%d \n",a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}4

//声明一个指向含有10个元素的数组指针，其中每个元素是一个函数指针，
//该函数的返回值时int,参数是int* 

//int(*(*p)[10])(int *)