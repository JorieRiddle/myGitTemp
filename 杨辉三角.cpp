#include <stdio.h>
#define M 10
#define N 10
int main()
{   
	int i,j;
	int arr[M][N]={0};
	for(i=0;i<M;i++)
	{
		arr[i][0]=arr[i][i]=1;  
		//不加{}
	}
    for(i=2;i<M;i++) //有i-1所以才2开始
	{
		for(j=1;j<i;j++)
		{
		   arr[i][j]=arr[i-1][j]+arr[i-1][j-1];   //要另外给for，因为i从2开始
		}
	}
	for(i=0;i<M;i++)
	{		
		for(j=0;j<=i;j++)
		{

		   printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}