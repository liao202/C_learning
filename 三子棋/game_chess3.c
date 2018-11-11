#include "game_chess3.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void game_chess3_init()
{
	/*---�������---*/
	srand((unsigned)time(0));
	/*---�ھ���ʼ��---*/
	winner = ' ';
	/*---���̳�ʼ��---*/
	for (int row = 0; row < ROW; ++row)
	{
		for (int col = 0; col < COL; ++col)
		{
			g_borad[row][col] = ' ';
		}
	}
}

void print_board()
{
	for (int row = 0; row < ROW; ++row)
	{
		printf("| %c | %c | %c |\n", g_borad[row][0],
			g_borad[row][1], g_borad[row][2]);
		printf("|---|---|---|\n");
	}
}

void player_move()
{
	printf("��������ӣ�\n");
	while (1)
	{
		int row = 0;
		int col = 0;
		printf("������������꣨row col��: ");
		scanf("%d %d", &row, &col);
		if (row < 1 || row > ROW ||
			col < 1 || col > COL)
		{
			printf("���ֵܣ���Ϲ�����루�ֶ���������\n");
			continue;
		}
		if (g_borad[row - 1][col - 1] != ' ')
		{
			printf("���ֵܣ���Ϲ�����루�ֶ���������\n");
			continue;
		}
		g_borad[row - 1][col - 1] = 'x';
		break;
	}
}

void computer_move()
{
	while (1)
	{
		int row = rand() % ROW;
		int col = rand() % COL;
		if (g_borad[row][col] == ' ')
		{
			g_borad[row][col] = 'o';
			break;
		}
	}
}

char check_winner()
{
	/*---�м��---*/
	for (int row = 0; row < ROW; ++row)
	{
		if (g_borad[row][0] == g_borad[row][1] &&
			g_borad[row][0] == g_borad[row][2] &&
			g_borad[row][0] != ' ')
		{
			return g_borad[row][0];
		}
	}
	/*---�м��---*/
	for (int col = 0; col < COL; ++col)
	{
		if (g_borad[0][col] == g_borad[1][col] &&
			g_borad[0][col] == g_borad[2][col] &&
			g_borad[0][col] != ' ')
		{
			return g_borad[0][col];
		}
	}
	/*---б�߼��---*/
	if (g_borad[1][1] == g_borad[0][0] &&
		g_borad[1][1] == g_borad[2][2] &&
		g_borad[1][1] != ' ' ||
		g_borad[1][1] == g_borad[0][2] &&
		g_borad[1][1] == g_borad[2][0] &&
		g_borad[1][1] != ' ')
	{
		return g_borad[1][1];
	}
	/*---������---*/
	int row = 0;
	int col = 0;
	for (row = 0; row < ROW; ++row)
	{
		for (col = 0; col < COL; ++col)
		{
			if (g_borad[row][col] == ' ')
			{
				break;
			}
		}
		if (row == ROW && col == COL)
		{
			return 'q';
		}
	}
	return 'e';
}

void print_result()
{
	if (winner == 'x')
	{
		printf("��ϲ����Ӯ����ͨ���ԣ��ֶ���������\n");
	}
	if (winner == 'o')
	{
		printf("���ͣ��޴��ĵ���սʤ���㣨�ֶ���������\n");
	}
	if (winner == 'q')
	{
		printf("���ֶ���������\n");
	}
}