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
	int i,j;
	for (i = 0; i < 21; i++)
	{
		map[i][0] = i+1;
	}
	for (i = 0; i < 21; i++)
	{
		map[0][i] = i+1;
	}
	for (i = 0; i < 21; i++)
	{
		for (j = 0; j < 21; j++)
		{
//			printf("%d", map[i][j]);    #存在问题
		}
	}
}
int PutChess()
{

}
int WithDraw()
{

}
int Judge()
{

}
int Result()
{

}
int x;
int main()
{
	int map[21][21];
	Choose(x,map);
}