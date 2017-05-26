#include <stdlib.h>
#include<stdio.h>
int Choose(int i,int map[21][21])
{
	int who = 1;
	int system(const char *string);
	while (1)
	{
		system("cls");
		printf("按任意键开始！\n");
		system("pause");
		printf("\n\n1、开始游戏！\n\n2、退出游戏\n\n请选择：");
		scanf_s("%d", &i);
		if (i == 1)
		{
			DrawMap(map,who);
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
int DrawMap(int map[21][21],int who)
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
		PutChess(map,who);
		system("pause");
}
int PutChess(int map[21][21],int who)
{
	char ch;
	while (1)
	{
		int x=0, y=0;
		while (who==1)
		{
			getchar();
			printf("黑色持方下子，坐标以空格分开:");
			scanf_s("\n%d %d", &x, &y);
			if (!(x > 0 && x < 21) || !(y > 0 || y < 21)||map[x][y]!=0)
			{
				printf("输入非法！重新输入！\n");
				continue;
			}
			else
			{
				map[x][y] = '*';
				printf("悔棋？(y/n):");
				getchar();
				scanf_s("%c", &ch);
				if (ch == 'y')
				{
					WithDraw(map, x, y);
				}
				else
				{
					Judge(map);
					who = 2;
					DrawMap(map, who);
					break;

				}
			}
		}
		while (who==2)
		{
			getchar();
			printf("白色持方下子，坐标以空格分开:");
			scanf_s("\n%d %d", &x, &y);
			if (!(x > 0 && x < 21) || !(y > 0 || y < 21)||map[x][y]!=0)
			{
				printf("输入非法！重新输入！\n");
				continue;
			}
			else
			{
				map[x][y] = 'O';
				fflush(stdin);
				printf("悔棋？(y/n):");
				getchar();
				scanf_s("%c", &ch);
				if (ch == 'y')
				{
					WithDraw(map, x, y);
				}
				else
				{
					Judge(map);
					who = 1;
					DrawMap(map, who);
					break;
				}
			}
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
			else if (map=='O')
			{
				flag = 0;
				for (x = i+1, y = j+1; x < i + 5, y < j + 5; x++, y++)
				{
					if (map[x][j] == 'O')
					{
						flag = 2;
					}
					else if (map[i][y] == 'O')
					{
						flag = 2;
					}
					else if (map[x][y] == 'O')
					{
						flag = 2;
					}
				}
				for (x = i + 4, y = j + 4; x >= i, y >= j; x--, y--)
				{
					if (map[x][j] == 'O')
					{
						flag = 2;
					}
					else if (map[i][y] == 'O')
					{
						flag = 2;
					}
					else if (map[x][y] == 'O')
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