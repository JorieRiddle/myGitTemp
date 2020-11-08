#include <stdio.h>
int main()
{
	int x,a,b,c;
	scanf("%d",&x);
	a=x/100;
    b=(x-100*a)/10;
    c=x%10;
    if(x>99 && x<1000)
	{
	
        if(x==a^3+b^3+c^3)
		{
			printf("%d=%d*%d*%d+%d*%d*%d+%d*%d*%d\n",x,a,a,a,b,b,b,c,c,c);
		}
		else
		{
			printf("不是水仙花数\n");
		}    
	}
	else
	{
		printf("Error Input!\n");
	}



	return 0;
}