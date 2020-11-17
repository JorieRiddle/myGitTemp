#include <stdio.h>
int main()
{  
	int i,k;
	int arr[10];
	for(i=0;i<10;i++)
	{
       scanf("%d",&i);
	}
	int sz=sizeof(arr)/sizeof(arr[0]);
	int left=0;
	int right=sz-1;
	int mid=(left+right)/2;
	if(arr[mid]>k)
	{
		right=mid-1;
	}
	else if(arr[mid]<k)
	{
		left=mid+1;
	}
	else 
	{
		printf("ÕÒµ½%d\n",mid);
	}
		return 0;
}