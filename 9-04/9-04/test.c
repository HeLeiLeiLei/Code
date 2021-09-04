#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main(){
//
//	//char arr[] = "abcdef";
//
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6 数组地址 - 数组指针 char (*p)[7]=&arr;
//	//printf("%d\n", strlen(&arr + 1));//随机值
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//printf("%d\n", sizeof(arr));//7  因为后面还有一个'\0' sizeof(arr)计算数组的大小 但是是字节
//	//printf("%d\n", sizeof(arr + 0));//4 这里是指针
//	//printf("%d\n", sizeof(*arr));//1 *arr 是数组首元素地址 解引用之后 就是第一个字符 a
//	//printf("%d\n", sizeof(arr[1]));//1 第二个字符 
//	//printf("%d\n", sizeof(&arr));//4 整个数组的地址还是 地址 指针大小都是4
//	//printf("%d\n", sizeof(&arr + 1));//4 指针加1还是指针
//	//printf("%d\n", sizeof(&arr[0] + 1));//4 同上
//
//	//char *p = "abcdef";
//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//随机值
//	//printf("%d\n", strlen(&p + 1));//随机值
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	//printf("%d\n", sizeof(p));//4 指针放的是首元素地址 'a'
//	//printf("%d\n", sizeof(p + 1));//4
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1  int arr[10]  arr[0] == *(arr+0) 
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p + 1));//4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 
//	//a[0] 相当于第一行作为一维数组的数组名，sizeof(arr[0])把数组单独放在sizeof()内
//	//计算的是第一行数组的大小  就相当于把二维数组看成一位数组 就是三个元素 a[0] a[1] a[2] 分别代表一个数组
//	printf("%d\n", sizeof(a[0] + 1));//4  a[0]是第一行数组首元素地址  a[0]+1就是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4 a是二维数组的数组名 没有sizeof(数组名) 也没有&(数组名) ,所以a是首元素地址
//	//看二维数组看成一维数组是 a就是第一行整个数组的地址 a+1 就是第二行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4  这里代表的是第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16  sizeof 是不会访问a[3] 存在的地址的//
//
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5
//	return 0;
//}
////程序的结果是什么？2 5



//由于还没学习结构体，这里告知结构体的大小是20个字节
struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);//0x1:其实就是1 因为p指针是一个struct类型指针加1的话，就必须加20个字节
	//100000+20  逢16进1 所以结果是 100014
	printf("%p\n", (unsigned long)p + 0x1);//100000 转化成整形数字是1,048,576 +1 =1,048,577
	//就相当于加了一个1 0x100001
	printf("%p\n", (unsigned int*)p + 0x1);//把0x100000强制转换成无符号int* 指针类型 int类型指针加1就是加4个字节
	//所以 (unsigned int*)p + 0x1 == 0x100000+4 = 0x100004
	return 0;
}