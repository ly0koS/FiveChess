#include <stdlib.h>
#include<stdio.h>
int Choose(int i,int map[21][21])
{
	int system(const char *string);
	while (1)
	{
		system("cls");
		printf("����������ѡ��ѡ�\n1����ʼ��Ϸ��\n2���˳�\n");
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
		printf("%d    ", map[0][i]);
	}
	printf("\n\n\n");
	for (i = 1; i < 21; i++)
	{
		map[i][0]=i;
		printf("%d", map[i][0]);
		printf("\n\n\n");
	}
	for (i = 1; i < 21; i++)
	{
		for (j = 1; j < 21; j++)
		{
			map[i][j] = '    ';
		}
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
			printf("�ڷ�������������,�Կո�ֿ�:");
			scanf_s("%d %d", &x, &y);
			if (!(x > 0 && x < 21) || !(y > 0 || y < 21))
			{
				printf("���벻�Ϸ������������룡\n");
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
		}
	}
	while (1)
	{
		printf("�׷�������������,�Կո�ֿ�:");
		scanf_s("%d %d", &x, &y);
		if (!(x > 0 && x < 21) || !(y > 0 || y < 21))
		{
			printf("���벻�Ϸ������������룡\n");
		}
		else
		{
			break;
		}
	}
	map[x][y] = '#';
	if ((ch = getchar()) == 'Z')
	{
		WithDraw(map);
	}
	else
	{
		Judge(map);
	}
}
int WithDraw()
{

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
	int map[21][21];
	Choose(x,map);
}