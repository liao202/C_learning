/*
**	���Ʒ�֮С������, С������һЩ��, ��������һ��
**	���ò���ˬ, �ֳ���һ��, �������, ����18��, ��
**	ʣһ��, ��С��ԭ�����˶�����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	/*---��18��ʣ�µ�����---*/
	int pear_count = 1;
	for (int i = 18; i > 0; --i)
	{
		pear_count = (pear_count + 1) * 2;
	}
	printf("��С���ʼһ������%d����!\n", pear_count);
	system("pause");
	return 0;
}