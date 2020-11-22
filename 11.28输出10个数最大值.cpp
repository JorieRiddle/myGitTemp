#include <stdio.h>
int main()
{
    int i,j,max;
	int arr[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(j=1;j<10;j++)
	{
		if(max<arr[j])
		{
			max=arr[j];
		}
	}
	printf("%d\n",max);
	return 0;
}