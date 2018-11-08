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
	// printf("%d", *ptr_int); 不可行，void*只知房间号，不知房间大小，不知道
	// 不可行，指针变量的加减前提是知道一个房间的大小（int 房间大小为4，double 为8）
	// 两个void*指针也不能进行运算，两个指针差的结果为中间隔得元素的个数
	printf("%P", ptr_int + 1);
	printf("%P", ptr_char + 1);
	system("pause");
	return 0;
}