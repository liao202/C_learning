#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 10;
	char b = 'b';
	void* ptr_int = &a;
	void* ptr_char = &b;
	printf("The pointer to the int a: %p", ptr_int);
	printf("The pointer to the char a: %p", ptr_char);
	// printf("%d", *ptr_int); �����У�void*ֻ֪����ţ���֪�����С����֪��
	// �����У�ָ������ļӼ�ǰ����֪��һ������Ĵ�С��int �����СΪ4��double Ϊ8��
	// ����void*ָ��Ҳ���ܽ������㣬����ָ���Ľ��Ϊ�м����Ԫ�صĸ���
	printf("%P", ptr_int + 1);
	printf("%P", ptr_char + 1);
	system("pause");
	return 0;
}