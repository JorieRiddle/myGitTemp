#include <stdio.h>
int main()
{
	int a[5];
	int i,j,t;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(j=0;j<3;j++)
	{
		t=a[j];
		a[j]=a[4-j];
		a[4-j]=t;
	}
	for(i=0;i<5;i++)
	printf("%d ",a[i]);
	return 0;
}