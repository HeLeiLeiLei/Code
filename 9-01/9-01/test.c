#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main(){
//
//	//�ַ�ָ��
//	char ch = 'w';
//	char* pch = &ch;
//	const char* p2 = "abcdefg";
//
//	//ָ������ ���� ���ָ�������
//	int* arr[] = {0};
//	char* arr2[5];
//	
//	//����ָ��-ָ�������ָ��
//	//int* p3;����ָ��
//	//char* p4;�ַ�ָ��
//
//	int arr5[5];
//	int (*p)[5]=&arr5;//ָ������ p��һ��ָ�� ָ��һ������ ��������5��Ԫ�� ÿ��Ԫ�ض���int����
//	return 0;
//}

//������� ָ�����
//void test1(int arr[3][5]){
//
//}ok
//void test1(int arr[][5]){
//
//}ok
//void test2(int arr[][]){
//
//}no

//void test3(int* arr ){//err
//	
//}
//void test4(int** p){//err
//
//}
//void test5(int (*p)[5]){
//
//}
//int main(){
//	
//	int arr[3][5] = {0};
//	//test(arr1);//��ά���鴫��
//	//test(arr2);
//	//test3(arr);
//	//test4(arr);
//	test5(arr);
//	return 0;
//
//	return 0;
//}

//����ָ��-ָ�������ָ��
//����ָ��-ָ������ָ�� ��ź�����ַ��һ��ָ��
//int Add(int x,int y){
//	return x + y;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	//Add(a,b);Add �� &Add ��һ�������� ���Ǻ����ĵ�ַ
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//	int(*p2)(int, int) = Add;
//	int(*p)(int, int) = &Add;
//	printf("%d\n",(*p2)(2,3));
//	printf("%d\n", (*p)(3, 3));
//	return 0;
//}

//void Print(char* str){
//	printf("%s\n",str);
//}
//int main(){
//	/*char wa = 'a';
//	char* pwa = &wa;
//	printf("%c\n", wa);
//	printf("-----\n", wa);
//	Print(pwa);*/
//	//char arr[] = "abcde";
//	void (*p)(char* )=Print;
//	(*p)("abcd");
//	
//	return 0;
//}
//void(*signal(int, void(*)(int)))(int);
////����
//typedef void(*pfun_t)(int)
//pfun_t signal(int, pfun_t);
//���� signal ����һ���������� ������������ ��һ��������int �ڶ����Ǻ���ָ�� ָ��ĺ���������int ����������void
//signal�����ķ�������Ҳ��һ��ָ�뺯�� ָ��ĺ���������int ����������void

//int Add(int x,int y){
//	return x + y;
//}
//int Sub(int x, int y){
//	return x - y;
//}
//int Mul(int x, int y){
//	return x * y;
//}
//int Div(int x, int y){
//	return x / y;
//}
//
//int main(){
//	//int* arr[10];//����һ������ ��10��Ԫ�� ÿ��Ԫ�ض���һ��ָ��
//	///int (*p)(int,int)=Add;//��ʽһ������ָ�� ָ������ָ�� ��ô����ָ��������ôд��
//	int(* p[4])(int, int) = {Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0; i < 4;i++){
//		printf("%d\n", p[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}
//
//char* my_strcopy(char* dest,const char* src){
//
//}
//int main(){
//	//1.дһ������ָ��pf �ܹ�ָ��my_strcopy
//	char* (*pf)(char*,const char*) = my_strcopy;
//	//2.дһ������ָ������pfarr �ܹ����my_strcopy �����ĵ�ַ
//	char* (*pfarr[4])(char*,const char*) = { my_strcopy};
//}

//����ָ������ʾ������ -- ת�Ʊ�
//������
//void menu(){
//	printf("***************************\n");
//	printf("****  1��Add  2��Sub  *****\n");
//	printf("****  3��Mul  4��Div  *****\n");
//	printf("********* 0��exit *********\n");
//	printf("***************************\n");
//}
//
//int Add(int x,int y){
//	return x + y;
//}
//int Sub(int x, int y){
//	return x - y;
//}
//int Mul(int x, int y){
//	return x * y;
//}
//int Div(int x, int y){
//	return x / y;
//}
//
//void Colo(int (*pf)(int,int)){
//	int x = 0;
//	int y = 0;
//	printf("������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main(){
//	int input=0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("������ѡ��:>");
//		scanf("%d",&input);
//	
//		switch (input)
//		{
//		case 1:
//			Colo(Add);
//			break;
//		case 2:
//			Colo(Sub);
//			break;
//		case 3:
//			Colo(Mul);
//			break;
//		case 4:
//			Colo(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//int main(){
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("������ѡ��:>");
//		scanf("%d", &input);
//		int(*pfarr[])(int, int) = {0, Add, Sub, Mul, Div };
//		int x = 0;
//		int y = 0;
//		if (input>=1 && input<=4){
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("%d \n", ret);
//		}
//		else if(input == 0){
//			printf("�˳�\n");
//			break;
//		}
//		else{
//			printf("�������\n");
//		}
//		
//	} while (input);
//
//	return 0;
//}
//int main(){
//	int input=0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("������ѡ��:>");
//		scanf("%d",&input);
//	
//		switch (input)
//		{
//		case 1:
//			printf("������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

int Add(int x,int y){
	return x + y;
}

//int main(){
//	
//	int arr[4];
//	int (*p)[4] = arr;//����ָ��
//
//	int (*pf)(int, int) = Add;//����ָ��   ��ô ����ָ������ĺ���ָ����ôд
//	int(*pfarr[4])(int, int); //����ָ������
//	int(*(*ppfarr)[4])(int, int) = &pfarr;//����ָ������ĺ���ָ��
//	//ppfarr ��һ��ָ�� ָ��һ������(����ָ������) ��������4��Ԫ��
//	//ÿ��Ԫ�ض��Ǻ���ָ��int(* )(int,int)
//	return 0;
//}


//�ص�����
//void Print(char* str){
//	printf("%s\n",str);
//}
//
//
//void test(void (*p)(char*)){
//	printf("test\n");
//	p("hello world");
//}
//int main(){
//
//	test(Print);
//	return 0;
//}


void BubbleSort(int arr[],int sz){
	for (int i = 0; i < sz;i++){
		for (int j = 0; j<sz-i-1;j++){
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(){

	//ʵ��ð�ݺ���
	int arr[] = {5,9,8,3,10,2,6,7,4,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr,sz);
	for (int n = 0; n < sz; n++){
		printf("%d ", arr[n]);
	}
	return 0;
}