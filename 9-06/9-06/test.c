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
////дһ�������������ַ���
//int main(){
//	char arr[256] = { 0 };
//	//scanf("%s",arr);//abcdef ���û�����ո�ʱscanf�ͻ�ֹͣ��ȡ
//	gets(arr);//��ȡһ��
//	//������
//	reverse(arr);
//	printf("�������ַ���:%s\n",arr);
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮��,��ʵa��һ������
//���� 2+22+222+2222+22222
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

////ͳ��0-100000֮���ˮ�ɻ���
//int main(){
//	int i = 0;
//	for (i = 0; i <= 100000; i++){
//		//1 �ж�λ�� n
//		int n = 1;//ÿ�����Ļ���λ���ض����ڵ���1
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
//		//2 ����ÿһλ��λ���η�֮�� sum
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp = temp / 10;
//		}
//		//3 �Ƚ�i==sum
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
//	//����
//	for (int i = 0; i < num; i++){
//		int j = 0;
//		//�ո�
//		for (j = 0; j < num - 1 - i; j++){
//			printf(" ");
//		}
//		//��*��
//		for (j = 0; j < 1 + i * 2; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	//����
//	for (i = 0; i <num-1; i++){
//		//�ո�
//		int j = 0;
//		for (j = 0; j <=i ;j++){
//			printf(" ");
//		}
//		//��*��         2*(num-1-i)-1
//		for (j = 0; j <(num-1)*2-1-2*i; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//
//	return 0;
//}


//һƿ����1ԪǮ 2����ƿ�ӿ��Ի�1ƿ���� ��ô20ԪǮ���Ժȵ�����ƿ����(���ʵ��)
//int main(){
//	
//	int money = 0;//Ǯ
//	int total = 0;//���˶���ƿ
//	int empty = 0;//��ƿ
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
//	printf("���� %d ƿ\n",total);
//	return 0;
//}

//����һ���������飬ʵ��һ������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿��


//1 2 3 4 5 6 7 8 9 10
void move(int arr[],int len){
	int left = 0;
	int right = len - 1;
	while (left<right)
	{
		//�����ż��
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//�ұ�������
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