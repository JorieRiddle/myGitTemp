/*给定10个整数的序列，要求对其重新排序。排序要求:
1.奇数在前，偶数在后；
2.奇数按从大到小排序；
3.偶数按从小到大排序。*/
#include<stdio.h>//三步走1.从小到大排序2.从后到前输出奇数3.从前向后输出偶数
#define n 10
int main()
{
    int a[n],i,j,t;
    for(i=0;i<n;i++)//输入
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)//1.排序
	{
        for(j=i;j<n;j++)
		{
            if(a[i]>a[j])//从小到大
            {
				t=a[j];
				a[j]=a[i];
				a[i]=t;
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