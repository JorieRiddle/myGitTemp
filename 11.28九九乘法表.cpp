#include <stdio.h>
int main()
{
	int i,j,x;
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
			x=i*j;
			printf("%d*%d=%.2d ",j,i,x);
		}
		printf("\n");
	}
}