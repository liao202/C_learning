#include <stdio.h>

#define PRINT(FORMAT, VALUE)\
		printf("the value is "FORMAT"\n", VALUE);

/*** #的作用，把一个宏参数编程对应的字符串 ***/
#define PRINT2(FORMAT, VALUE)\
		printf("the value of "#VALUE" is "FORMAT"\n", VALUE);

/*  
 * #的作用，把位于它两边的符号合成一个符号，
 * 它允许宏定义从分离的文本片段创建标识符 
 */
#define ADD_TO_SUM(num, value) \
	sum##num += value;

int main(){
	int i = 10;
	int sum5 = 0;

	PRINT("%d", 10);
	PRINT2("%d", i + 3);

	ADD_TO_SUM(5, 10);

	printf("sum5: %d\n", sum5);

	return 0;
}
