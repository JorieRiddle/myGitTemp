#include <stdio.h>
int main()
{   
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0 && n%2!=0)
		{
			printf("不是素数\n");
		}
		else
		{
			printf("是素数\n");
		}
	}
	return 0;
}