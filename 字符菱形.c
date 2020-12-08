#include <stdio.h>
int print_trangle(char c,int n)
{
	int i=0;
	int j=0;
	int a[26];
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*(i+1)-1;j++)
		{
			printf("%c",c+i);
		}
		printf("\n");
	}
	for(i=n-2;i>=0;i--)
	{
		for(j=i;j<n-1;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*(i+1)-1;j++)
		{
			printf("%c",c+i);
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	int n;
	char c;
	char a[26];
    scanf("%c",&c);
	a[0]=c;
	scanf("%d",&n);
    print_trangle(c,n);
	return 0;
}