#include <stdio.h>
int main()
{
	char c[7]={'a','b','c','d','e','f','g'};
	int i,j;
	for(i=0;i<7;i++)
	{
		for(j=7;j>i+1;j--)
			putchar(' ');
		for(j=0;j<2*i+1;j++)
			putchar(c[i]);
		putchar('\n');
	}
	for(i=0;i<7;i++)
	{
		 for(j=0;j<i;j++)
				putchar(' ');
     	for(j=0;j<13-2*i;j++)
		putchar(c[6-i]);
	   
		putchar('\n');
	}
	return 0;
}