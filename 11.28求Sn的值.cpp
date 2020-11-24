#include <stdio.h>
int flag(int a,int n)
{
	int p=a;
	for(int i=2;i<=n;i++)
	{
		p=p*10+a;
	}
	return p;
}
int main()
{
	int n,a;
	int s=0,i;
	scanf("%d%d",&n,&a);
	for(i=1;i<=n;i++)
	{
		s=s+flag(a,i);
	}
	printf("%d\n",s);
	return 0;
}