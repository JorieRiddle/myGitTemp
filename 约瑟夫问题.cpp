#include <stdio.h>
int main()
{
	int n,m;  //n猴子个数，报数数到m退出
	int number; //记录剩余猴子个数
	int count=1;  //count代表当前报数
	int i,pos;  //pos为下标
	scanf("%d\n",&n);
	scanf("%d\n",&m);
	number=n;
	int monkey[301]={0};  //比下标多1，并初始化
    for(i=0;i<n;i++)
	{
		monkey[i]=i+1; //报数从1开始
	}
	pos=0; //下标
	while(number>1)  //个数大于1始终循环
	{
		if(monkey[pos]>0)
		{
			if(count!=m)
			{
				count++;
				pos=(pos+1)%n;
			}
			else
			{//为0的情况，杀死猴子，使此猴=0
				monkey[pos]=0;
			    count=1; //报数重新开始
				number--; //猴子个数减1
				pos=(pos+1)%n; //当前处理数组下标+1
			}
		}
		else  //循环到最后一个猴子，然后返回第一个，形成环
		{
           pos=(pos+1)%n; //当前处理的数组下标+1
		}
	}
	for(i=0;i<n;i++)
	{
		if(monkey[i]>0)
			printf("King is a[%d]=%d\n",monkey[i],monkey[i]);
	}
  	return 0;
}
