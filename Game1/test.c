//������������Ϸ
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("*******************************\n");
	printf("*****1.paly      0.wxit********\n");
	printf("*******************************\n");
}
//��Ϸ������ʵ��
void game()
{
	char ret=0;
	//����-����߳���������Ϣ
	char board[ROW][COL]={0};//ȫ���ǿո�
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	Displayboard(board,ROW,COL);
	//����
	while(1)
	{
  	//�������
		PlayerMove(board,ROW,COL);
	    Displayboard(board,ROW,COL);
	//�ж�����Ƿ�Ӯ
	    ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	//��������
		ComputerMove(board,ROW,COL);
	    Displayboard(board,ROW,COL);
	//�жϵ����Ƿ�Ӯ
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	}
	if(ret=='*')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
 {
   int input;
   srand((unsigned int)time (NULL));
   do
   {
	   menu();
	   printf("��ѡ��:>");
	   scanf("%d",&input);
	   switch(input)
	   {
	   case 1:
		   game();
		   printf("������\n");
		   break;
	   case 0:
		   printf("�˳���Ϸ\n");
		   break;
	   default:
		   printf("ѡ�����������ѡ��!\n");
		   break;
	   
	   }
   }while(input);
 }


int main()
{
 test();
 return 0;
}