#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//void remo(int* parr,int sz){
//	
//	int* left = parr;
//	int* right = parr + sz - 1;
//	
//	while (left<right)
//	{
//		while ((left<right) && (*left % 2 == 1)){
//			left++;
//		}
//		while ((left<right) && (*right % 2 == 0))
//		{
//			right--;
//		}
//		if (left<right){
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//			right--;
//		}
//	}
//}
//
//int main(){
//	
//	int arr[] = {1,2,3,4,5,6,7,9,9,10};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	remo(arr,size);
//	for (int i = 0; i < size;i++){
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//5λ�˶�ѡ�ֲμ���10����ˮ����������������Ԥ��������
//Aѡ��˵:B�ڶ����ҵ���
//Bѡ��˵:�ҵڶ���E����
//Cѡ��˵:�ҵ�һ��D�ڶ�
//Dѡ��˵:C����ҵ���
//Eѡ��˵:�ҵ��ģ�A��һ
//����������ÿλѡ�ֶ�˵����һ�룬����ʵ��
//int main(){
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 0; a <= 5; a++){
//		for (b = 0; b <= 5; b++){
//			for (c = 0; c <= 5; c++){
//				for (d = 0; d <= 5; d++){
//					for (e = 0; e <= 5; e++){
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) && 
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1)
//							){
//							if (a*b*c*d*e==120)
//								printf("a=%d b=%d c=%d d=%d e=%d \n",a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}4

//����һ��ָ����10��Ԫ�ص�����ָ�룬����ÿ��Ԫ����һ������ָ�룬
//�ú����ķ���ֵʱint,������int* 

//int(*(*p)[10])(int *)