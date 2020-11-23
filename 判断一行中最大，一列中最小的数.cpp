#include<stdio.h>
#define M 5
#define N 5
int main()
{
	//输入的矩阵
	int i,j,maxi,k,flag;
	int arr[M][N]={{2,5,6,8,7},{1,2,4,2,0},{6,2,8,7,3},{9,3,12,2,11},{8,0,9,5,3}};
    //for(i=0;i<M;i++)
	//{
	//	for(j=0;j<N;j++)
	//	{
	  //       scanf("%d",&arr[i][j]);
	//	}
	//}
	//确定了每一行第几列的数是最大值
	for(i=0;i<M;i++)
	{
		maxi=0;
		flag=1; //大前提
		for(j=1;j<N;j++)
		{
			if(arr[i][j]>arr[i][maxi]) //依次和后面的数比较
			maxi=j;
		}
	
	//确定这个数是否满足该列最小值
	for(k=0;k<M;j++)
	{        //此数只要大于这一列，则题目不成立
			if(arr[i][maxi]>arr[k][maxi])
			{
				flag=0;
				break;
			}
	}
	if(flag==1)
	printf("%d\n",arr[i][maxi]);
		else
		printf("cuo\n");
	}

	return 0;
}