//谁考了第k名
/*在一次考试中，每个学生的成绩都不相同，现知道了每个学生的学号和成绩，
求考第k名学生的学号和成绩*/
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
