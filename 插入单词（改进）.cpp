//≤Â»Îµ•¥ 
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
		for(i=j;i<=n;i++)
			if(strcmp(a[j],a[i])>0)
		{
			strcpy(t,a[i]);
			strcpy(a[i],a[j]);
			strcpy(a[j],t);
		}
	}
	for(i=0;i<=n;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}
