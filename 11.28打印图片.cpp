#include <stdio.h>
int main()
{
	int i,j;
	char c[]={'a','b','c','d','e','f','g'};
	for(i=0;i<7;i++)
	{
		for(j=7;j>1+i;j--)
		{
			putchar(' ');
		}
		for(j=0;j<2*i+1;j++)
		{
			putchar(c[i]);
		}
			putchar('\n');
	}
	for(i=0;i<7;i++)
	{
		for(j=0;j<i;j++)
			putchar(' ');
		for(j=0;j<13-i*2;j++)
			putchar(c[6-i]);
		putchar('\n');
	}

	return 0;
}
