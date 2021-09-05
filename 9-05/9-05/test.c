#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4 2000000
//	//ptr[-1] == *(ptr+(-1)) == *(ptr-1)
//	//int(a) 这里是一个整数 不是指针 加以就是移动一个字节  
//	//                                 小端                                    大端
//	//*ptr2 是指针 就必须访问4个字节  01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	//*ptr2== 02 00 00 00
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//这里面是小括号 每个小括号都是逗号表达式
//	//所以 数组中放的应该是
//	// 1 3
//	// 5 0
//	// 0 0
//	int *p;
//	p = a[0];//a[0] 这式就是第一行的首元素地址
//	printf("%d", p[0]);//1 这里的p[0] == *(p+0)
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	// p+0     p+1         p+2         p+3         p+4  &p[4][2]  &a[4][2]   &p[4][2]-&a[4][2]=-4
//	//{{ 0,0,0,0,0 },{ 0,0,0,0,0 },{ 0,0,0,0,0 },{ 0,0,0,0,0 },{ 0,0,0,0,0 },}
//	int(*p)[4];//数组指针 指向一个数组 数组里面有4个元素 每个元素都是 int类型
//	p = a;// p=&a[0][0] 还是首元素地址
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); //ff ff ff fc,-4
//	//p[4][2] == *(*(p[4])+2)
//	//两个指针想减 就是中间相差多少字节
//	return 0;
//}

//int main(){
//
//	int a = -4;
//	//1000 0000 0000 0000 0000 0000 0000 0100 原码
//	//1111 1111 1111 1111 1111 1111 1111 1011 反码
//	//1111 1111 1111 1111 1111 1111 1111 1100 补码
//	int* p = &a;
//	printf("%p",a);
//
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	// int* p =aa;
//	// *(p+2)== p[2] == *(arr+2) == arr[2]
//	// 1,2,3,4,5
//	// 6,7,8,9,10
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));//*(aa+1)== a[1]  代表第二行的地址
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
//	return 0;
//}

//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}


int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);//point
	printf("%s\n", *--*++cpp + 3);//er
	printf("%s\n", *cpp[-2] + 3);//st
	printf("%s\n", cpp[-1][-1] + 1);//ew
	return 0;
}//              cpp(char***)                    cp                     c//                                       c+3  (FIRST)            char*           "NETER"//                                       c+2  (POINT)            char*           "NEW"//                                       c+1  (NEW)              char*           "POINT"//                                        c   (NETER)            char*           "FIRST"////   cpp++ 值是在改变的  cpp[-2]值是没有改变的
//int main(){
//
//	char arr[] = {"aaaa"};
//	char* p = arr;
//	printf("%s ", p);
//	return 0;
//}