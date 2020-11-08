#include <stdio.h>
int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int years,months,days,j=0,i;
	printf("请输入年月日：\n");
	scanf("%d-%d-%d",&years,&months,&days);
	if((years%4==0 && years%100!=0) ||years%400==0)  //if可以单带
	{
	     a[1]=29; //无int a【1】
	}
    for(i=0;i<months-1;i++)
	{
		j=a[i]+j; //无int a【i】
	}
    printf("这是第%d天\n",j+days);
	return 0;
}