#include <stdio.h>
int main()
{
	int x,a,b,c;
	scanf("%d",&x);
	a=x/100;
    b=(x-100*a)/10;
    c=x-100*a-10*b;
    if(x>99 && x<1000)
	{
	
       if(x==a*a*a+b*b*b+c*c*c)
		{
			printf("%d=%d*%d*%d+%d*%d*%d+%d*%d*%d\n",x,a,a,a,b,b,b,c,c,c);
		}
		else
		{
			printf("Not a narcissistic number\n");
		}    
	}
	else
	{
		printf("Error Input!\n");
	}



	return 0;
}
}