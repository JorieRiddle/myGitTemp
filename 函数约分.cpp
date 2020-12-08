#include <stdio.h>
int gcd(int a,int b)
{
	int m,n,t;
	m=a;
	n=b;
	while(n>0)
	{
     t=m%n;
	 m=n;
	 n=t;
	}
     return printf("%d/%d\n",a/m,b/m);
}

int main()
{
	int m,n;
	scanf("%d/%d",&m,&n);
	gcd(m,n);
	return 0;
}