#include <stdio.h>
#define M 100000
int main()
{
	int n1,i,k,j,m;
	long int array[M];
	scanf("%d\n",&n1);    //表示有n座山
	for(j=0;j<n1;j++)
		scanf("%ld",&array[j]);  //定义山的高度
	k=1;         //k表示能看到的山的数量
	m=array[0];  //假设第一座山为最大值
	for(i=1;i<n1;i++)
	{
		if(array[i]>m)  //进行比较，得出最大的山
		{
			m=array[i];
			k=k+1;     //每一次比较成功就k+1，列3 4 5 4 7 1 
			continue;  //break是跳出循环，continue是结束本次循环，因为下面没有代码所以continue没有意义
		}
	}
    printf("%d",k);
	return 0;
}
