#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//��Ŀ���� ʵ��һ��������������ת�ַ����е�k���ַ�
//����
//ABCD ����һ���ַ��õ�BCDA
//ABCD ����ת�����ַ��õ�CDAB

//1 ������ⷨ
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

//2 ������ת��
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
//	//1 �������
//	testH(arr, arr + k - 1);
//	//2 �����ұ�
//	testH(arr + k, arr + len - 1);
//	//3 ��������
//	testH(arr, arr + len - 1);
//}
//
//
//int main(){
//	int num = 0;
//	char arr[] = "ABCDEF";
//	printf("%s\n", arr);
//	printf("������������ת������:>");
//	scanf("%d",&num);
//	left_move(arr, num);
//	printf("%s\n",arr);
//	return 0;
//}


//дһ���������ж�һ���ַ��Ƿ�Ϊ����һ���ַ�����ת֮����ַ�
//���� ����s1=AABCD ��s2=BCDAA ����1
//����s1=abcd��s2=ACBD������0

//AABCD ����תһ���ַ��õ�ABCDA
//AABCD ����ת�����ַ��õ�BCDAA
//AABCD ����תһ���ַ��õ�DAABC
 

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
//	//1 �������
//	testH(arr, arr + k - 1);
//	//2 �����ұ�
//	testH(arr + k, arr + len - 1);
//	//3 ��������
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
//	//1 �ڵ�һ���ַ�����׷���Լ�
//	//strcat(arr1,arr1);//err
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if(len1 != len2){
//		return 0;
//	}
//	strncat(arr1, arr1, len1);
//	//2 ��׷�Ӻ���ַ�����Ѱ�� ��û����ת����Ӽ�
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


//��Ŀ���� ���Ͼ���
//��Ŀ���� ��һ�����־����ÿ�д����ҵ�����������ϵ����ǵ��� 
//���д�����������ľ����в���ĳ�������Ƿ����

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

	//������
	return 0;

}

int main(){
	
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int num = 5;
	int x = 3;
	int y = 3;
	int ret=findName(arr,&x,&y,num);
	if (ret==1){
		printf("�±���:%d %d\n",x,y);
		printf("�ҵ���\n");
	}
	else{
		printf("û�ҵ�\n");
	}
	return 0;
}
