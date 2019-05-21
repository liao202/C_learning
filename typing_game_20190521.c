#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <termios.h>

#define N 20

static void randomString(char str[], int len){
	srand((unsigned int)time(0));

	int i = 0;

	for(i = 0; i < len; ++i){
		str[i] = 'a' + rand() % 26;
	}
}

static char myGetchar(){
	struct termios oldt, newt;

	/* 得到当前终端的标准输入设置 */
	tcgetattr(STDIN_FILENO, &oldt);
	newt = oldt;

	/* 不使用标准输入模式，不显示标准输入字符 */
	newt.c_lflag &= ~(ICANON | ECHO);

	/* 不等数据传输完毕，就改变属性 */
	tcsetattr(STDIN_FILENO, TCSANOW, &newt);

	char ch = getchar();

	/* 恢复 */
	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

	return ch;
}

static void gameRunning(){

	char str[N + 1] = {0};
	time_t start, end;
	int cnt = 0;
	size_t i = 0;

	randomString(str, N);
	printf("%s\n", str);

	for(i = 0; i < N; ++i){
		char ch = myGetchar();

		if(ch == str[i]){
			++cnt;
			printf("%c", ch);
		}
		else{
			printf("*");
		}

		/* 获取开始时间 */
		if(i == 0){
			start = time(NULL);
		}
		/* 获取结束时间 */
		if(i == N - 1){
			end = time(NULL);
		}
	}
	printf("\n");
	printf("time: %lus\n", end - start);
	printf("accuracy: %d%\n", (100 * cnt) / 20);
	printf("--------------------\n");
}

void gameStart(){
	while(1){
		printf("--------------------\n");
		printf("   game starting!\n");
		gameRunning();
		printf("Enter 'q' to exit!\n");
		printf("Enter others to start next game!\n");
		char ch = getchar();
		if(ch == 'q'){
		printf("       exit!\n");
			break;
		}
	}
}

int main(){

	gameStart();

	return 0;
}
