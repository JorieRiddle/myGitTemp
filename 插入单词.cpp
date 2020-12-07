#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
	scanf("%d",&n);
	char a[100][100]={'\0'};
	char t[200];
	scanf("%s",&a[n]);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-j;i++)
			if(strcmp(a[i],a[i+1])>0)
		{
			strcpy(t,a[i]);
			strcpy(a[i],a[i+1]);
			strcpy(a[i+1],t);
		}
	}
	for(i=0;i<=n;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}