#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
//void reverse(char* str){
//	
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* rigth = str + len - 1;
//
//	while (left<rigth)
//	{
//		char temp = *left;
//		*left = *rigth;
//		*rigth = temp;
//		left++;
//		rigth--;
//	}
//}
//	
////写一个函数来逆序字符串
//int main(){
//	char arr[256] = { 0 };
//	//scanf("%s",arr);//abcdef 当用户输入空格时scanf就会停止获取
//	gets(arr);//读取一行
//	//逆序函数
//	reverse(arr);
//	printf("逆序后的字符串:%s\n",arr);
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和,其实a是一个数字
//列如 2+22+222+2222+22222
//int main(){
//	int a = 0;
//	int sum = 0;
//	int n = 0;
//	int num2 = 0;
//	scanf("%d%d",&a,&n);
//	if (a != 0){
//		for (int i = 0; i < n; i++){
//			num2 = num2 * 10 + a;//22 240-24
//			sum += num2;//2 24 
//		}
//	}
//	else{
//		printf("%d\n",0);
//	}
//	printf("%d",sum);
//	// 2
//	// 2 + 2 * 10
//	//(2 + 2 * 10)*10+2
//	//((2 + 2 * 10)*10+2)*10+2
//	//(((2 + 2 * 10)*10+2)*10+2)*10+2
//	return 0;
//}

////统计0-100000之类的水仙花数
//int main(){
//	int i = 0;
//	for (i = 0; i <= 100000; i++){
//		//1 判断位数 n
//		int n = 1;//每个数的基础位数必定大于等于1
//		int temp = i;
//		int sum = 0;
//		//123 
//		//123/10=12
//		//12/10=2
//		//2/10=0
//		while (temp /= 10)
//		{
//			
//			n++;
//			//temp = temp / 10;
//		}
//		//2 计算每一位的位数次方之和 sum
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp = temp / 10;
//		}
//		//3 比较i==sum
//		if (i == sum){
//			printf("%d ",i);
//		}
//	}
//
//	return 0;
//}



//123
//123%10=3
//123/10=12
//12%10=2
//12/10=1
//1%10=1
//1/10=0

//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *

//int main(){
//
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//
//	//上面
//	for (int i = 0; i < num; i++){
//		int j = 0;
//		//空格
//		for (j = 0; j < num - 1 - i; j++){
//			printf(" ");
//		}
//		//‘*’
//		for (j = 0; j < 1 + i * 2; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下面
//	for (i = 0; i <num-1; i++){
//		//空格
//		int j = 0;
//		for (j = 0; j <=i ;j++){
//			printf(" ");
//		}
//		//‘*’         2*(num-1-i)-1
//		for (j = 0; j <(num-1)*2-1-2*i; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//
//	return 0;
//}


//一瓶饮料1元钱 2个空瓶子可以换1瓶饮料 那么20元钱可以喝到多少瓶饮料(编程实现)
//int main(){
//	
//	int money = 0;//钱
//	int total = 0;//喝了多少瓶
//	int empty = 0;//空瓶
//	scanf("%d",&money);
//	total = money;
//
//	total = money * 2 - 1;
//
//	/*empty = money;
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}*/
//	printf("喝了 %d 瓶\n",total);
//	return 0;
//}

//输入一个整数数组，实现一个函数
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分


//1 2 3 4 5 6 7 8 9 10
void move(int arr[],int len){
	int left = 0;
	int right = len - 1;
	while (left<right)
	{
		//左边找偶数
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//右边找奇数
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}

		if (left < right){
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
	
}

print(int arr[], int len){
	for (int i = 0; i < len - 1;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main(){

	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int len = sizeof(arr) / sizeof(arr[0]);
	move(arr, len);
	print(arr,len);
	return 0;
}