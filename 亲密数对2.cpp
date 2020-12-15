#include <stdio.h>

int reverse(int n)
{
	int m=0,i=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			m=m+i;
		}
	}
	return m;
}

int print(int n)
{
   	return	n==reverse(reverse(n));
}

int main()
{
    int m,n;
	scanf("%d%d",&m,&n);
    int i=0;
	for(i=m;i<=n;i++)
	{
		if(print(i))
			printf("%d %d\n",i,reverse(i));
	}
	return 0;
}