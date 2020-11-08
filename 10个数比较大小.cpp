#include <stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
    int i;
	int max=0;
	for( i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	printf("%d\n",max);
	return 0;
}