#include <stdio.h>
int main()
{
	int x;
	int i;
	scanf("%d",&x);
	printf("x=");
	for(i=2;i<x;i++)  //一定从2开始除
	{
		while(x%i==0)
		{
			x=x/i;
			printf("%d",i);
			if(x>1)
			{
				printf("*");
			}
		}
	}
	return 0;
}