#include <stdlib.h>
#include<stdio.h>
int Choose(int i,char map[21][21])
{
	int system(const char *string);
	while (1)
	{
		system("cls");
		printf("����������ѡ��ѡ�\n1����ʼ��Ϸ��\n2���˳�\n");
		scanf_s("%d", &i);
		if (i == 1)
		{
			DrawMap(map[21][21]);
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
int DrawMap()
{

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
	char map[21][21];
	Choose(x,map);
}