#include <stdlib.h>
#include<stdio.h>
int Choose(int i)
{
	int system(const char *string);
	while (1)
	{
		system("cls");
		printf("����������ѡ��ѡ�\n1����ʼ��Ϸ��\n2���˳�\n");
		scanf_s("%d", &i);
		if (i == 1)
		{
			DrawMap();
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
	int map[21][21];
	Choose(x);
}