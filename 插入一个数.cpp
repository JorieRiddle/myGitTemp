#include <stdio.h>
int main()
{   
	int a[8]={2,5,7,10,14,17,20};
	int i,j,n,end;
	scanf("%d",&n);
	end=a[6];
	if(n>end)
	{
		a[7]=n;
	}
	else
	{
		for(i=0;i<7;i++)
		{
			if(a[i]>n)
			{
				for(j=7;j>i;j--)           //不能用i++，因为前面的数会把后面遮住，所以从最后一个往前面移
				{
					a[j]=a[j-1];
				}
				a[i]=n;
				break;
			}
		}
	}
	for(i=0;i<8;i++)
		printf("%d\t",a[i]);
	printf("\n");
	return 0;
}