#include <stdio.h>
long int num_convert(long int n,long int m)
{
	int sum;
	int x=0;
    while(n)
	{
		x=x*10+n%10;
		n=n/10;
	}
	int y=0;
    while(m)
	{
		y=y*10+m%10;
		m=m/10;
	}
    sum=x+y;
	return printf("%d+%d=%d",x,y,sum);
}

int main()
{
    long int n=0,m=0;
    scanf("%d %d",&n,&m);
	num_convert(n,m);
   
    return 0;
}