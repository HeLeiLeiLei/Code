#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
//unsigned 无符号
//signed 有符号
//int main(){
//
//	/*int a = 10;
//	float f = 10.0;*/
//
//	int a = 20;
//	//00000000000000000000000000010100  - 原码
//	//00000000000000000000000000010100  - 反码   正数的原码补码反码都是一样的
//	//00000000000000000000000000010100  - 补码
//	//在内存中都是以补码方式存放的
//	//0000 0000 0000 0000 0000 0000 0001 0100
//	//0x000000014 内存中存放是以16进制为存储的
//	int b = -10;
//	//10000000000000000000000000001010  - 原码   最高位为1
//	//11111111111111111111111111110101  - 反码   最高位不变 其它位取反
//	//11111111111111111111111111110110  - 补码   加1就可以得到补码
//	//在内存中都是以补码方式存放的
//	//1111 1111 1111 1111 1111 1111 1111 0110
//	//0xffffffff6 
//	return 0;
//}

// 整数份为:无符号数和有符号数
//有符号数:正数和负数
//正数：源码反码补码相同
//负数：源码反码补码不相同
//无符号数:源码反码补码相同


//int main(){
//
//	1 - 1;
//	//1+(-1)
//	//00000000000000000000000000000001  1的补码 其实就是原码 因为是正数
//	
//	//10000000000000000000000000000001  -1的补码
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//
//	//   00000000000000000000000000000001
//	// + 11111111111111111111111111111111
//	//  100000000000000000000000000000000
//	//   00000000000000000000000000000000
//	return 0;
//}

//int main(){
//
//	int num = 0x11223344;
//	//内存中地址存放是以小端存放的
//	//44 33 22 11
//	return 0;
//}

//int check_sys(){
//	int a = 1;
//	char* p = &a;
//	if (*p==1){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}

//int check_sys(){
//	int a = 1;
//	char* p = &a;
//	return *p;
//}

//int check_sys(){
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main(){
//	
//	//写一段代码 告诉我当前机器的字节序是什么
//	
//	int ret=check_sys();
//	if (ret==1){
//		printf("小端\n");
//	}
//	else{
//		printf("大端\n");
//	}
//	return 0;
//
//}

//指针类型的意义
//1.指针类型决定了指针解引用操作符能访问几个字节: char* p---- *p 只能访问1个字节 
//												  int* p ---- *p 只能访问4个字节
//2.指针类型决定了+1,-1,加的或者是减的是几个字符：char* p;p+1;逃过一个字符;  int* p;p+1;跳过一个整形-4个字节
//比如
//int main(){
//
//	int a = 0x11223344;
//	//char* p = &a;
//	//*p = 0;  这一步执行以后 内存中的值 就是 00 33 22 11 因为 char* 指针只能操作一个字符
//	int* p = &a;
//	*p = 0;// 这一步执行之后 内存中的值 就是 00 00 00 00 因为 int* 指针能操作4个字符
//	return 0;
//}

//int main(){
//	//%d 输出的是整形 如果要整形提升要按符号位填充剩余的比特位
//	char a = -1;
//	//-1  10000000000000000000000000000001
//	//    11111111111111111111111111111110
//	//    11111111111111111111111111111111
//	//    11111111
//	//提升11111111111111111111111111111111
//	//反码11111111111111111111111111111110
//	//补码10000000000000000000000000000001
//	//所以%d输出的就是 -1
//	signed char b = -1;
//	//11111111
//	//同上
//	unsigned char c = -1;
//	//11111111
//	//因为这里是无符号数 所以这里的整形提升是填充0
//	//填充 00000000000000000000000011111111  
//	//补码反码原码 相同
//	//原码 00000000000000000000000011111111
//	//255
//	printf("%d %d %d\n",a,b,c);
//
//	return 0;
//}

//int main(){
//
//	char a = -128;
//	//原码 10000000000000000000000010000000
//	//反码 11111111111111111111111101111111
//	//补码 11111111111111111111111110000000
//	//     10000000
//	//提升 11111111111111111111111110000000
//	printf("%u\n", a); //直接按无符号打印
//
//	//提升 11111111111111111111111110000000 补码
//	//     11111111111111111111111101111111 反码
//	//     10000000000000000000000010000000 原码
//	printf("%d\n", a);
//	
//	//%d 打印10进制的有符号数字
//	//%u 打印10进制的无符号数字
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000 原码
//	//11111111111111111111111101111111 反码
//	//11111111111111111111111110000000 补码
//	//11111111111111111111111110000000 提升
//	printf("%u\n", a);//按无符号位 打印 数字很大
//	return 0;
//}

//int main()
//{
//	char a = 128;//127+1  因为char的字符范围 是-128到127
//	//00000000000000000000000001111111 原码反码补码相同 但是内存里存的是补码
//	//01111111
//	//00000001 相加
//	//10000000 -128
//	printf("%u\n", a);//数字很大 但是 和 -128相同
//	return 0;
//}

//int main(){
//
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i+j);//-10
//	// i 10000000 00000000 00000000 00010100  原码
//	//   11111111 11111111 11111111 11101011  反码
//	//   11111111 11111111 11111111 11101100  补码
//	// j 00000000 00000000 00000000 00001010  补码
//	
//	//   11111111 11111111 11111111 11110110  补码=结果
//	//   11111111 11111111 11111111 11110101  反码 =补码-1
//	//   10000000 00000000 00000000 00001010  原码 -10
//	return 0;
//}


//int main(){
//	unsigned int i;
//	for (i = 9; i >= 0; i--){
//		printf("%u\n",i);// 因为unsigned 是无符号数 所以-1最后变成了1
//		//-1
//		//10000000 00000000 00000000 00000001
//		//11111111 11111111 11111111 11111110
//		//11111111 11111111 11111111 11111111
//		Sleep(1000);
//	}
//	return 0;
//}


//int main(){
//	unsigned int i = -1;
//	if (i>0){
//		printf("s");
//	}
//	else{
//		printf("c");
//	}
//}

//int main(){
//	char a[1000];//0--999
//	int i;
//	for (i = 0; i < 1000;i++){
//		a[i] = -1 - i;//   -1到-1000？ strlen=1000?  
//					  //   其实在char里面 127+1=-128  -128-1=127
//					  //   那么 从-1到-128 然后127到0  0就是strlen寻找到的' 4\0'  
//	}
//	printf("%d",strlen(a));//127+128=255
//	return 0;
//}

//int main(){
//	
//	unsigned char i = 0;//0-255
//	//00000000 00000000 00000000 00000000
//	//00000000 00000000 00000000 00000000
//	//
//	for (i = 0; i <= 255;i++){
//		printf("hello word\n");
//	}
//	
//	return 0;
//}


int main(){

	unsigned char i = 0;//0-255
	//i++;
	////1
	////00000000 00000000 00000000 00000001
	////00000001
	////提升
	////00000000 00000000 00000000 00000001
	//printf("%d\n",i);
	//i++;
	//printf("%d\n", i);
	//i++;
	//printf("%d\n", i);
	//i++;
	//printf("%d\n", i);
	i = 256;
	printf("%d\n",i);//0
	i = 257;
	printf("%d\n", i);//1
	i = 258;
	printf("%d\n", i);//2
	return 0;
}
