#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//实现 1!+2!+3!+....n!
//int main(){
//	int num = 0;
//	int sum = 0;
//	int i = 1;
//	printf("请输入一个正整数字:>");
//	scanf("%d",&num);
//	for (i = 1; i <= num;i++){
//		int j = 1;
//		int ret = 1;
//		for (j = 1; j <= i;j++){
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("阶乘是:%d\n",sum);
//	return 0;
//}


//在一个二维数组array中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，
//每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，
//判断数组中是否含有该整数。
//输入：
//7, [[1, 2, 8, 9], [2, 4, 9, 12], [4, 7, 10, 13], [6, 8, 11, 15]]
//返回值：true
//存在7，返回true
//#define bool int
//#define false 0
//#define true 1
//#define ROW 4
//#define CLU 4

//bool Find_Num(int num,int arr[ROW][CLU],int row,int clu){
//	int i = 0;
//	for (i = 0; i <row; i++){
//		int j = 0;
//		for (j = 0; j < clu; j++){
//			if (num == arr[i][j]){
//				return true;
//			}
//		}
//	}
//	return false;
//}
//int main(){
//	int num = 0;
//	int arr[ROW][CLU] = { { 1, 2, 8, 9 }, { 2, 4, 9, 12 }, { 4, 7, 10, 13 }, { 6, 8, 11, 15 } };
//	printf("请输入一个数>:");
//	scanf("%d",&num);
//	int bl=Find_Num(num,arr, ROW, CLU);
//	if (bl == 1){
//		printf("%d存在\n",num);
//	}
//	else{
//		printf("%d不存在\n", num);
//	}
//	return 0;
//}

//用二分法查找 
// 1 2 8 9
// 2 4 9 12
// 4 7 10 13
// 6 8 11 15
//bool Find_Num(int num,int arr[ROW][CLU],int row,int clu){
//	int rows = 0;
//	int clus = clu - 1;
//	while (clus >= 0)
//	{
//		int val = arr[rows][clus];
//		if (num == val){
//			return true;
//		}
//		if (num<val){
//			clus--;
//		}
//		rows++;
//	}
//	return false;
//}
//int main(){
//	int num = 0;
//	int arr[ROW][CLU] = { { 1, 2, 8, 9 }, { 2, 4, 9, 12 }, { 4, 7, 10, 13 }, { 6, 8, 11, 15 } };
//	printf("请输入一个数>:");
//	scanf("%d",&num);
//	int bl=Find_Num(num,arr, ROW, CLU);
//	if (bl == 1){
//		printf("%d存在\n",num);
//	}
//	else{
//		printf("%d不存在\n", num);
//	}
//	return 0;
//}

//strcpy 字符拷贝
//int main(){
//	char arr1[] = "#############";
//	char arr2[] = "hello word!";
//	strcpy(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

//my_strcpy 
void my_strcpy(char* dest, char* src){
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
}
int main(){
	char arr1[] = "#############";
	char arr2[] = "hello word!";
	my_strcpy(arr1, arr2);
	printf("%s\n",arr1);
	return 0;
}