#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//ʵ�� 1!+2!+3!+....n!
//int main(){
//	int num = 0;
//	int sum = 0;
//	int i = 1;
//	printf("������һ����������:>");
//	scanf("%d",&num);
//	for (i = 1; i <= num;i++){
//		int j = 1;
//		int ret = 1;
//		for (j = 1; j <= i;j++){
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("�׳���:%d\n",sum);
//	return 0;
//}


//��һ����ά����array�У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������
//ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ��������
//�ж��������Ƿ��и�������
//���룺
//7, [[1, 2, 8, 9], [2, 4, 9, 12], [4, 7, 10, 13], [6, 8, 11, 15]]
//����ֵ��true
//����7������true
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
//	printf("������һ����>:");
//	scanf("%d",&num);
//	int bl=Find_Num(num,arr, ROW, CLU);
//	if (bl == 1){
//		printf("%d����\n",num);
//	}
//	else{
//		printf("%d������\n", num);
//	}
//	return 0;
//}

//�ö��ַ����� 
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
//	printf("������һ����>:");
//	scanf("%d",&num);
//	int bl=Find_Num(num,arr, ROW, CLU);
//	if (bl == 1){
//		printf("%d����\n",num);
//	}
//	else{
//		printf("%d������\n", num);
//	}
//	return 0;
//}

//strcpy �ַ�����
//int main(){
//	char arr1[] = "#############";
//	char arr2[] = "hello word!";
//	strcpy(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

//my_strcpy 
//void my_strcpy(char* dest, char* src){
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src){
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src){
//	if (dest != NULL && src != NULL){
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//	
//}

//#include <assert.h>
//char* my_strcpy(char* dest,const char* src){
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	//��srcָ������ݿ�����destָ��Ŀռ���ȥ������'\0'�ַ���
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main(){
//	char arr1[] = "#############";
//	char arr2[] = "hello word!";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main(){
//	const int num = 0;
//	//num = 1;
//	//const int* p = &num;
//	//*p = 1;//err const����*��� ���ε���*p,Ҳ����˵���ܸı�*p(num)
//	/*int* const p = &num;
//	int n = 0;*/
//	//p = &n;//err const����*�ұ� ���ε���ָ�����p���� ��Ҳ����˵��ַp���ܱ��ı�	
//	printf("%d\n",num);
//	return 0;
//}

//#include <assert.h>
//int my_strlen(const char* arr){
//	int count = 0;
//	assert(arr != NULL);//���� ��ָ֤����Ч��
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main(){
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//int main(){
//	char arr1[10] = "abcd";
//	char arr2[10] = "efg";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//�ֶ�ʵ�� strcat()
#include <assert.h>
char my_strcat(char* arr1, const char* arr2,int sz_arr1){
	assert(arr1 != NULL);
	assert(arr2 !=NULL);//��ָ֤����Ч
	char* ret = arr1;
	while (*(arr1 + sz_arr1++) = *arr2++)
	{
		;
	}
	return ret;
}
int main(){
	char arr1[10] = "abcd";
	char arr2[10] = "efg";
	int sz_arr1=strlen(arr1);
	//int sz_arr2 = strlen(arr2);
	//printf("%s\n", strcat(arr1, arr2, sz_arr2));
	printf("%s\n", my_strcat(arr1, arr2, sz_arr1));
	return 0;
}