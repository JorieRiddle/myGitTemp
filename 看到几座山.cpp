#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n1,i,k,j,m;
	long int *array;
	n1>=1&&n1<=100000;
	scanf("%d",&n1);
	array=(long int*)malloc(n1*sizeof(long int));
	free(array);
	for(j=0;j<n1;j++)
		scanf("%ld",&array[j]);
	k=1;
	m=array[0];
	for(i=1;i<n1;i++)
	{
		if(array[i]>m)
		{
			m=array[i];
			k=k+1;
			continue;
		}
	}
    printf("%d",k);
	return 0;
}