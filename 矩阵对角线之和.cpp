#include<stdio.h>
int main()
{
	int a[3][3];
	int sum1=0,sum2=0,sum;
	int i,j;
	for(i=0;i<3;i++)
	{			//����ά�������Ȼ��ֵ
		for(j=0;j<3;j++)
		{
			scanf("%d", &a[i][j]);
			if(i==j)
			{
				sum1+=a[i][j]; //��������ϵ����µĶԽ���֮��
			}
		}
	}
	j=2;
	for(i=0;i<=2;i++)
	{
			sum2+=a[i][j];  //��������µ����ϵĶԽ���֮��
			j--;
		}
    int n=3/2;
	sum=sum1+sum2-a[n][n];
	printf("%d",sum);
	
	return 0;
}