#include <stdio.h>
int days(int y,int m,int d)
{
		int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
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
	return printf("%d\n",d);
}

int main()
{

	int d,m,y;
	scanf("%d-%d-%d",&y,&m,&d);
	days(y,m,d);
	return 0;
}