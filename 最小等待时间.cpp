#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,j,i,f,c,k,t,z;
	int *array;
	scanf("%d",&n);
	array=(int*)malloc(n*sizeof(int));
	free(array);
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	while(n)
	{
		f=0;
		for(j=1;j<n;j++)
		{
			if(array[j]<array[j-1])
			{
			   c=array[j-1];
			   array[j-1]=array[j];
			   array[j]=c;
			   f=1;
			}

		}
		if(f==0)
			break;
	}
	z=0;
	for(k=0;k<n;k++)
	{
		t=array[k]*(n-k-1);
		z=z+t;
	}
	printf("%d",z);
	return 0;
}