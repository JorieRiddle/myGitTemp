#include <stdio.h>
int main()
{
	double jc(int n);
	int jcloop(int n);

	int n;
	scanf("%d",&n);
	printf("%.0lf\n",jc(n));
	printf("%d\n",jcloop(n));
	return 0;
}

int jcloop(int n)
{
	if(n==1)
		return 1;
	else
		return n*jcloop(n-1);
}

double jc(int n)
{
	int i;
	double s=1.0;
	for(i=2;i<=n;i++)
	{
		s*=i;
	}
	return s;
}