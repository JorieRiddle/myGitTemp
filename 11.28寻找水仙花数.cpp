#include <stdio.h>
int main()
{
	int a,b,c;
	int x;
	for(x=100;x<1000;x++)
	{
		a=x/100;
		b=(x-a*100)/10;
		c=x-100*a-10*b;
		if(x==a*a*a+b*b*b+c*c*c)
		{
           printf("%d\n",x);
		}
	}
	return 0;
}