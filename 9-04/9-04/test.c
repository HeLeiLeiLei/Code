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
//	//printf("%d\n", strlen(&arr));//6 �����ַ - ����ָ�� char (*p)[7]=&arr;
//	//printf("%d\n", strlen(&arr + 1));//���ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//printf("%d\n", sizeof(arr));//7  ��Ϊ���滹��һ��'\0' sizeof(arr)��������Ĵ�С �������ֽ�
//	//printf("%d\n", sizeof(arr + 0));//4 ������ָ��
//	//printf("%d\n", sizeof(*arr));//1 *arr ��������Ԫ�ص�ַ ������֮�� ���ǵ�һ���ַ� a
//	//printf("%d\n", sizeof(arr[1]));//1 �ڶ����ַ� 
//	//printf("%d\n", sizeof(&arr));//4 ��������ĵ�ַ���� ��ַ ָ���С����4
//	//printf("%d\n", sizeof(&arr + 1));//4 ָ���1����ָ��
//	//printf("%d\n", sizeof(&arr[0] + 1));//4 ͬ��
//
//	//char *p = "abcdef";
//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//���ֵ
//	//printf("%d\n", strlen(&p + 1));//���ֵ
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	//printf("%d\n", sizeof(p));//4 ָ��ŵ�����Ԫ�ص�ַ 'a'
//	//printf("%d\n", sizeof(p + 1));//4
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1  int arr[10]  arr[0] == *(arr+0) 
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p + 1));//4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 
//	//a[0] �൱�ڵ�һ����Ϊһά�������������sizeof(arr[0])�����鵥������sizeof()��
//	//������ǵ�һ������Ĵ�С  ���൱�ڰѶ�ά���鿴��һλ���� ��������Ԫ�� a[0] a[1] a[2] �ֱ����һ������
//	printf("%d\n", sizeof(a[0] + 1));//4  a[0]�ǵ�һ��������Ԫ�ص�ַ  a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4 a�Ƕ�ά����������� û��sizeof(������) Ҳû��&(������) ,����a����Ԫ�ص�ַ
//	//����ά���鿴��һά������ a���ǵ�һ����������ĵ�ַ a+1 ���ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4  ���������ǵڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16  sizeof �ǲ������a[3] ���ڵĵ�ַ��//
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
////����Ľ����ʲô��2 5



//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);//0x1:��ʵ����1 ��Ϊpָ����һ��struct����ָ���1�Ļ����ͱ����20���ֽ�
	//100000+20  ��16��1 ���Խ���� 100014
	printf("%p\n", (unsigned long)p + 0x1);//100000 ת��������������1,048,576 +1 =1,048,577
	//���൱�ڼ���һ��1 0x100001
	printf("%p\n", (unsigned int*)p + 0x1);//��0x100000ǿ��ת�����޷���int* ָ������ int����ָ���1���Ǽ�4���ֽ�
	//���� (unsigned int*)p + 0x1 == 0x100000+4 = 0x100004
	return 0;
}