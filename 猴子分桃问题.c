/*
**	���ӷ�������, ��һֻ���ӽ��ҷ�Ϊ5��, ����һ��, �ú��ӰѶ��һ���Ե���
**	����������һ��, ������ֻ����һ�����, �ʺ�̲��ԭ�������ж��ٸ�����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int peach_count = 0;
	int count = 0;
	int temp = 0;
	/*---ÿ��ʣ������Ӹ�������Ϊ4�ı���---*/
	for (int i = 4; ; i += 4)
	{
		count = 0;
		peach_count = i;
		/*---����ʣ������Ӹ�������ԭ��������---*/
		for (int j = 0; j < 5; ++j)
		{
			temp = peach_count / 4 * 5 + 1;
			peach_count = temp;
			if (peach_count % 4 == 0)
			{
				++count;
			}
			/*---ĳ��ʣ������Ӳ��ܱ�4����, ˵������ԭ������i��---*/
			else
			{
				break;
			}
		}
		/*---��������ӷ�---*/
		if (count == 4)
		{
			printf("��̲��ԭ��������%d��ƻ��!\n", peach_count);
			break;
		}
	}
	system("pause");
	return 0;
}