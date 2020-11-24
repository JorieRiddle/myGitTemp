#include <stdio.h>
int main()
{   
	int n,m,i,x,a;
	scanf("%d%d",&n,&m);
	for( x=n;x<m+1;x++)
	{
      for( i=1;i<m;i++)
	  {
        if(x%i==0 && x%2!=0)
		{
		   x=0;
		}
		else if(x%7==0 ||(x-7)%10==0)

		{
		    a=x;
		}
		
	
	  }
	  
	  printf("%d\n",x);
	}
	return 0;
}