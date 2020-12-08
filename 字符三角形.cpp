#include <stdio.h>
void print_trangle(char c,int n)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
}
int main()
{
	int n,c;
	scanf("%c",&c);
	scanf("%d",&n);
	print_trangle(c,n);
	return 0;
}