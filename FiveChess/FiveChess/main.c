#include <stdlib.h>
#include<stdio.h>
int Choose(int i,int map[21][21])
{
	int system(const char *string);
	while (1)
	{
		system("cls");
		printf("输入数字以选择选项！\n1、开始游戏！\n2、退出\n");
		scanf_s("%d", &i);
		if (i == 1)
		{
			DrawMap(map);
		}
		else if (i == 2)
		{
			break;
		}
		else
		{
			system("cls");
			continue;
		}
	}
}
int DrawMap(int map[21][21])
{
	system("cls");
	int i, j;
	for (i = 0; i < 21; i++)
	{
		map[0][i] = i;
		map[i][0] = i;
		printf("%d    ", map[0][i]);
	}
	printf("\n\n\n");
	for (i = 1; i < 21; i++)
	{
		printf("%d    ", map[i][0]);
		for (j = 1; j < 21; j++)
		{
			if (map[i][j] == 0)
			{
				printf("    ");
			}
			else
			{
				printf("    %c", map[i][j]);
			}
		}
		printf("\n\n\n");
	}
	PutChess(map);
	system("pause");
}
int PutChess(int map[21][21])
{
	int x, y;
	char ch;
	while (1)
	{
		while (1)
		{
			getchar();
			printf("黑方输入落子坐标,以空格分开:");
			scanf_s("\n%d %d", &x, &y);
			if (!(x > 0 && x < 21) || !(y > 0 || y < 21)||map[x][y]!=0)
			{
				printf("输入不合法，请重新输入！\n");
				continue;
			}
			else
			{
				break;
			}
		}
		map[x][y] = '*';
		fflush(stdin);
		printf("悔棋？(y/n):");
		scanf_s("%c\n", &ch);
		if (ch == y)
		{
			WithDraw(map, x, y);
		}
		else
		{
			Judge(map);
			DrawMap(map);
			break;

		}
		while (1)
		{
			getchar();
			printf("白方输入落子坐标,以空格分开:");
			scanf_s("\n%d %d", &x, &y);
			if (!(x > 0 && x < 21) || !(y > 0 || y < 21)||map[x][y]!=0)
			{
				printf("输入不合法，请重新输入！\n");
				continue;
			}
			else
			{
				break;
			}
		}
		map[x][y] = 'O';
		fflush(stdin);
		printf("悔棋？(y/n):");
		scanf_s("%c\n", &ch);
		if (ch == y)
		{
			WithDraw(map, x, y);
		}
		else
		{
			Judge(map);
			DrawMap(map);
			break;
		}
	}
}
int WithDraw(int map[21][21],int x,int y)
{
	map[x][y] = 0;
	return 0;
}
int Judge(int map[21][21])
{

}
int Result()
{

}
int x;
int main()
{
	int map[21][21] = { 0 };
	Choose(x,map);
}