#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//题目内容 实现一个函数，可以旋转字符串中的k个字符
//列如
//ABCD 左旋一个字符得到BCDA
//ABCD 左旋转两个字符得到CDAB

//1 暴力求解法
//void left_move(char* arr, int num){
//	assert(arr != NULL);
//	char len = strlen(arr);
//	for (int i = 0; i < num;i++){
//		char tmp = *(arr);
//		for (int j = 0; j < len - 1;j++){
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}

//2 三步反转法
//abcdef
//ba fedc
//cdefab

//void testH(char* left, char* right){
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr,int k){
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(k<=len);
//	//1 逆序左边
//	testH(arr, arr + k - 1);
//	//2 逆序右边
//	testH(arr + k, arr + len - 1);
//	//3 逆序整体
//	testH(arr, arr + len - 1);
//}
//
//
//int main(){
//	int num = 0;
//	char arr[] = "ABCDEF";
//	printf("%s\n", arr);
//	printf("请输入想左旋转的字数:>");
//	scanf("%d",&num);
//	left_move(arr, num);
//	printf("%s\n",arr);
//	return 0;
//}


//写一个函数，判断一个字符是否为另外一个字符串旋转之后的字符
//列如 给定s1=AABCD 和s2=BCDAA 返回1
//给定s1=abcd和s2=ACBD，返回0

//AABCD 左旋转一个字符得到ABCDA
//AABCD 左旋转两个字符得到BCDAA
//AABCD 右旋转一个字符得到DAABC
 

void testH(char* left, char* right){
	assert(left != NULL);
	assert(right != NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

//void left_move(char* arr,int k){
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(k<=len);
//	//1 逆序左边
//	testH(arr, arr + k - 1);
//	//2 逆序右边
//	testH(arr + k, arr + len - 1);
//	//3 逆序整体
//	testH(arr, arr + len - 1);
//}
//
//int is_left_move(char* arr1,char* arr2){
//	int len = strlen(arr1);
//	for (int i = 0; i <len; i++){
//		left_move(arr1,1);
//		int ret = strcmp(arr1,arr2);
//		if (ret == 0){
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main() {
//       	 
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1,arr2);
//	if(ret==1){
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}




//int is_left_move(int* arr1,int* arr2){
//	//abcdefabcdef
//	//  cdefab
//	//1 在第一个字符串里追加自己
//	//strcat(arr1,arr1);//err
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if(len1 != len2){
//		return 0;
//	}
//	strncat(arr1, arr1, len1);
//	//2 在追加后的字符串里寻找 有没有旋转后的子集
//	char* ret=strstr(arr1,arr2);
//	if (ret != NULL){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//
//
//int main(){
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	
//	int ret=is_left_move(arr1,arr2);
//	if (ret==1){
//		printf("Yes\n");
//	}
//	else{
//		printf("No\n");
//	}
//	return 0;
//}


//题目名称 杨氏矩阵
//题目类容 有一个数字矩阵的每行从左到右递增，矩阵从上到下是递增 
//请编写程序在这样的矩阵中查找某个数字是否存在

//1 2 3
//4 5 6
//7 8 9
int findName(int arr[3][3], int* row, int* clu, int num){
	int x = 0;
	int y = *clu - 1;
	
	while (y >= 0 && x<=2)
	{
		if (num < arr[x][y]){
			y--;
		}
		else if (num>arr[x][y]){
			x++;
		}
		else{
			*row = x;
			*clu = y;
			return 1;
		}
	}

	//到不到
	return 0;

}

int main(){
	
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int num = 5;
	int x = 3;
	int y = 3;
	int ret=findName(arr,&x,&y,num);
	if (ret==1){
		printf("下标是:%d %d\n",x,y);
		printf("找到了\n");
	}
	else{
		printf("没找到\n");
	}
	return 0;
}
