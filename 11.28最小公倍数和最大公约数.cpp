#include <stdio.h>
int main()
{
    int m,n,a,b;
	scanf("%d%d",&m,&n);
	if(m==0 || n==0)
	{
      a=0;
	  b=1;
	}
	else
	{
		for(a=m;;a++)
		{
			if(a%m==0 && a%n==0)
				break;
		}
		for(b=n;;b--)
		{
			if(m%b==0 && n%b==0)
		break;
	}
	}
	printf("%d,%d\n",a,b);

	return 0;
}