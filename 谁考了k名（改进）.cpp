//˭���˵�k��
/*��һ�ο����У�ÿ��ѧ���ĳɼ�������ͬ����֪����ÿ��ѧ����ѧ�źͳɼ���
�󿼵�k��ѧ����ѧ�źͳɼ�*/
#include <stdio.h>
#define M 105
int main()
{
	int n,k,i,j;
	double fen[M];
	int hao[M];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d %lf\n",&hao[i],&fen[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			int num;
			double tmp;
			if(fen[i]<fen[j])
			{
				num=hao[i];
				hao[i]=hao[j];
				hao[j]=num;
				tmp=fen[i];
				fen[i]=fen[j];
				fen[j]=tmp;
			}
		}
	}
    printf("%d %g\n",hao[k-1],fen[k-1]);
	return 0;
}
