#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main(){

	//int a[] = { 1, 2, 3, 4 }; 
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a + 0));//4
	//printf("%d\n", sizeof(*a));//4
	//printf("%d\n", sizeof(a + 1));//4
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4
	//printf("%d\n", sizeof(*&a));//16
	//printf("%d\n", sizeof(&a + 1));//4
	//printf("%d\n", sizeof(&a[0]));//4
	//printf("%d\n", sizeof(&a[0] + 1));//4	//�ַ�����  strlen() ��������Ҫ���ǵ�ַ �����������û��'\0' ��ôstrlen�õ��Ľ��������ֵ
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", strlen(arr));//���ֵ
	printf("%d\n", strlen(arr + 0));//���ֵ  ������û������
	//printf("%d\n", strlen(*arr));//err ���������֮�� ��һ������ ����������һ����ַ ���Բ�������
	//printf("%d\n", strlen(arr[1]));//err ����������±���� ȡ����ֵ���ַ� b ���Բ��ǵ�ַ
	printf("%d\n", strlen(&arr));//���ֵ ȡ�������� Ҳ�Ǵ���Ԫ�ص�ַ������
	printf("%d\n", strlen(&arr + 1));//���ֵ ��һ��������һ������ ���ֵ-6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ ��һ���Ǵӵڶ����ַ����� ���ֵ-1

	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4	

	return 0;
}