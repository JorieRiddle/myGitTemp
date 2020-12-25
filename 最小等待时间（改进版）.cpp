//最小等待时间问题
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
     for(i=0;i<n-1;i++)
	 {
		for(j=i+1;j<n;j++)
		{
			if(array[j]<array[i])
			{
			   c=array[i];
			   array[i]=array[j];
			   array[j]=c;
			}

		}
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