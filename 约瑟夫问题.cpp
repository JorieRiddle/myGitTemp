#include <stdio.h>
int main()
{
	int n,m;  //n���Ӹ�������������m�˳�
	int number; //��¼ʣ����Ӹ���
	int count=1;  //count����ǰ����
	int i,pos;  //posΪ�±�
	scanf("%d\n",&n);
	scanf("%d\n",&m);
	number=n;
	int monkey[301]={0};  //���±��1������ʼ��
    for(i=0;i<n;i++)
	{
		monkey[i]=i+1; //������1��ʼ
	}
	pos=0; //�±�
	while(number>1)  //��������1ʼ��ѭ��
	{
		if(monkey[pos]>0)
		{
			if(count!=m)
			{
				count++;
				pos=(pos+1)%n;
			}
			else
			{//Ϊ0�������ɱ�����ӣ�ʹ�˺�=0
				monkey[pos]=0;
			    count=1; //�������¿�ʼ
				number--; //���Ӹ�����1
				pos=(pos+1)%n; //��ǰ���������±�+1
			}
		}
		else  //ѭ�������һ�����ӣ�Ȼ�󷵻ص�һ�����γɻ�
		{
           pos=(pos+1)%n; //��ǰ����������±�+1
		}
	}
	for(i=0;i<n;i++)
	{
		if(monkey[i]>0)
			printf("King is a[%d]=%d\n",monkey[i],monkey[i]);
	}
  	return 0;
}
