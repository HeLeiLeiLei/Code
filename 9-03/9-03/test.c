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
	//printf("%d\n", sizeof(&a[0] + 1));//4	//字符数组  strlen() 括号里需要的是地址 如果数组里面没有'\0' 那么strlen得到的将回事随机值
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr + 0));//随机值  和上面没有区别
	//printf("%d\n", strlen(*arr));//err 这里解引用之后 是一个数组 所以他不是一个地址 所以不会运行
	//printf("%d\n", strlen(arr[1]));//err 这里采用了下标访问 取到的值是字符 b 所以不是地址
	printf("%d\n", strlen(&arr));//随机值 取整个数组 也是从首元素地址往后找
	printf("%d\n", strlen(&arr + 1));//随机值 加一就是跳过一个数组 随机值-6
	printf("%d\n", strlen(&arr[0] + 1));//随机值 加一就是从第二个字符往找 随机值-1

	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4	

	return 0;
}