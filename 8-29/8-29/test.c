#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//实现 1!+2!+3!+....n!
int main(){
	int num = 0;
	int sum = 0;
	int i = 1;
	printf("请输入一个正整数字:>");
	scanf("%d",&num);
	for (i = 1; i <= num;i++){
		int j = 1;
		int ret = 1;
		for (j = 1; j <= i;j++){
			ret *= j;
		}
		sum += ret;
	}
	printf("阶乘是:%d\n",sum);
	return 0;
}