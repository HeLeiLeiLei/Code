#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main(){
//	//strncmp ��strcmp ��� Ҳ���ַ����Ƚ�
//	char* pstr1 = "abcdef";
//	char* pstr2 = "abcdefqwer";
//	//printf("%d",strcmp(pstr1,pstr2));//-1
//	//int ret=strncmp(pstr1,pstr2,6);//0
//	int ret = strncmp(pstr1, pstr2, 7);//-1
//	printf("%d\n",ret);
//	return 0;
//}

//strstr --�ַ�����
//int main(){
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* p=strstr(p1,p2);
//	if (p == NULL){
//		printf("�ִ�û���ҵ�\n");
//	}
//	else{
//		printf("%s\n", p);
//	}
//	
//}
#include <assert.h>
char* my_strstr(const char* str1,const char* str2){
	assert(str1);
	assert(str2);
	char* s1 = str1;
	char* s2 = str2;
	char* cur = str1;
	if (*str2 =='\0'){
		return str1;
	}
	//��str2��Ϊ�յ�ʱ��
	while (*cur){
		s1 = cur;
		s2 = str2;
		//��ȵ�ʱ��
		while ((*s1 != '\0') &&(*s2 != '\0') && (*s1 == *s2)){
			s1++;
			s2++;
		}
		//����ȵ�ʱ�� ����str2�Ѿ�ѭ���������� '\0'
		if (*s2 == '\0'){
			return cur;
		}
		cur++;
	}
	return NULL;
}

int main(){
	char* p1 = "abccbcbcddef";
	char* p2 = "bcbcd";
	char* p = my_strstr(p1, p2);
	if (p == NULL){
		printf("�ִ�û���ҵ�\n");
	}
	else{
		printf("%s\n", p);
	}

}