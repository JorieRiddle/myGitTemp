#include <stdio.h>
int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int d,m,y;
	scanf("%d-%d-%d",&d,&m,&y);
	if((y%4==0 && y%100!=0) || y%400==0)
	{
		a[1]=29;
	}
    int i,j=0;
	for(i=0;i<m-1;i++)
	{
		j=a[i]+j;
	}
	d=d+j;
	printf("%d",d);
	return 0;
}