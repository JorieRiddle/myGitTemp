#include <stdio.h>
int main()
{
	double a=1,sum=0;
	double n,i;
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		a=a*i;
		sum=sum+a;
	}
	printf("%.0lf\n",sum);
	return 0;
}