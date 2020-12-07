#include<stdio.h>//三步走1.从小到大排序2.从后到前输出奇数3.从前向后输出偶数
#define n 10
int main()
{
    int a[n],i,j,t;
    for(i=0;i<n;i++)//输入
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)//1.排序
	{
        for(j=0;j<n-1-i;j++)
		{
            if(a[j]>a[j+1])//从小到大
            {
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}//交换
		}
	}
    for(i=n-1;i>=0;i--) //2.从大到小输出奇数
	{
		if(a[i]%2!=0)//奇数
		{
            printf("%d ",a[i]);
		}
	}
    for(i=0;i<n;i++)//3.从小到大输出偶数
	{
        if(a[i]%2==0)//偶数
		{
            printf("%d ",a[i]);
		}
	}
	return 0;
}