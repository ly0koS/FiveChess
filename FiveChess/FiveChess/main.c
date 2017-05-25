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
			exit(0);
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
	for (i = 1; i < 10; i++)
	{
		printf("%d", map[i][0]);
		for (j = 1; j < 10; j++)
		{
			if (map[i][j] == 0)
			{
				printf("     ");
			}
			else
			{
				printf("    %c", map[i][j]);
			}
		}
		for (j = 10; j < 21; j++)
		{
			if (map[i][j] == 0)
			{
				printf("      ");
			}
			else
			{
				printf("     %c", map[i][j]);
			}
		}
		printf("\n\n\n");
	}
	for (i = 10; i < 21; i++)
	{
		printf("%d", map[i][0]);
		if (map[i][1] == 0)
		{
			printf("    ");
		}
		else
		{
			printf("   %c", map[i][1]);
		}
		for (j = 2; j < 10; j++)
		{
			if (map[i][j] == 0)
			{
				printf("     ");
			}
			else
			{
				printf("    %c", map[i][j]);
			}
		}
		for (j = 10; j < 21; j++)
		{
			if (map[i][j] == 0)
			{
				printf("      ");
			}
			else
			{
				printf("     %c", map[i][j]);
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
			printf("黑方输入落子坐标,以空格分开:");
			scanf_s("%d %d", &x, &y);
			if (!(x > 0 && x < 21) || !(y > 0 && y < 21))
			{
				printf("输入不合法，请重新输入！\n");
			}
			else
			{
				break;
			}
		}
		map[x][y] = '*';
		if ((ch = getchar()) == 'Z')
		{
			WithDraw(map);
		}
		else
		{
			Judge(map);
			DrawMap(map);
		}
	}
}
int WithDraw()
{

}
int Judge(int map[21][21])
{
	int i = 0, j = 0;
	int x = 0, y = 0;
	int flag = 0;
	for (i = 1; i < 21; i++)
	{
		for (j = 1; j < 21; j++)
		{
			if (map[i][j] == '*')
			{
				for (x = i+1, y = j+1; x < i + 5, y < j + 5; x++, y++)
				{
					if (map[x][j] == '*')
					{
						flag = 1;
					}
					else if (map[i][y] == '*')
					{
						flag = 1;
					}
					else if (map[x][y] == '*')
					{
						flag = 1;
					}
					else
					{
						flag = 0;
					}
				}
				for (x = i-1, y = j-1; x >i-5, y > j-5; x--, y--)
				{
					if (map[x][j] == '*')
					{
						flag = 1;
					}
					else if (map[i][y] == '*')
					{
						flag = 1;
					}
					else if (map[x][y] == '*')
					{
						flag = 1;
					}
					else
					{
						flag = 0;
					}
				}
				Result(flag);
			}
			else if (map=='#')
			{
				flag = 0;
				for (x = i+1, y = j+1; x < i + 5, y < j + 5; x++, y++)
				{
					if (map[x][j] == '#')
					{
						flag = 2;
					}
					else if (map[i][y] == '#')
					{
						flag = 2;
					}
					else if (map[x][y] == '#')
					{
						flag = 2;
					}
				}
				for (x = i + 4, y = j + 4; x >= i, y >= j; x--, y--)
				{
					if (map[x][j] == '#')
					{
						flag = 2;
					}
					else if (map[i][y] == '#')
					{
						flag = 2;
					}
					else if (map[x][y] == '#')
					{
						flag = 2;
					}
				}
				Result(flag);
			}
		}
	}
}
int Result(int flag)
{
	if (flag == 1)
	{
		printf("黑方获胜！\n");
		system("pause");
		main();
	}
	else if (flag == 2)
	{
		printf("白方获胜！\n");
		system("pause");
		main();
	}
	else
	{
		return 0;
	}
}
int x;
int main()
{
	int map[21][21] = { 0 };
	Choose(x,map);
}