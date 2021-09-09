#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//1 计数器方法
//size_t ==  unsigned int  无符号整数
//int my_strlen(char* str){
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2 递归
//int my_strlen(char* str){
//	assert(str != NULL);
//	if (*str == '\0'){
//		return 0;
//	}
//	else{
//		return 1 + my_strlen(str+1);
//	}
//}
////3 指针-指针
//
//
//
//int main(){
//
//	int len = my_strlen("abcdef");
//	printf("%d\n",len);
//
//	/*if (strlen("abc") - strlen("abcdef") < 0) {
//		printf("haha\n");
//	}
//	else{
//		printf("hehe\n");
//	}*/
//	return 0;
//}
//void my_strcpy(char* arr1,const char* arr2){
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	//
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}
//int main(){
//
//	char arr1[] = "abcdef";
//	char arr2[] = "java";
//	//my_strcpy(arr1,arr2);
//	printf("%d",sizeof(arr1)/sizeof(arr1[0]));
//	return 0;
//}

//int main(){
//	
//	//char arr1[] = "world";//这是错误的写法
//	char arr1[30] = "world\0xxxxxxxxxxxx";
//	char arr2[] = "hello";
//	strcat(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

//char* my_strcat(char* dest,char* src){
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	//首先要找到目的地的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//然后开始追加 当遇到'\0'时就停止追加
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return ret;
//}
//
//int main(){
//	char arr1[30] = "world";
//	char arr2[] = "hello";
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}

int main(){
	//strcmp 是按照字符的ASCLL码一对一对进行比较的
	char* pstr1 = "bbc";
	char* pstr2 = "abc";
	printf("%d\n",strcmp(pstr1,pstr2));
	return 0;
}