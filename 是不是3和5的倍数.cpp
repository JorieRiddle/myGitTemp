#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
    if(x>0)
	{
		if(x%3==0 && x%5==0)
		{
	     printf("%d",x);
		}
	    else
		{
		printf("%d",-x);
		
		
		}
	
	
	
	}
	else
	{
	printf("Incorrect input!\n");
	}


return 0;
}