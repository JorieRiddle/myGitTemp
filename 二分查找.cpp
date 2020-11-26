#include <stdio.h>
int main()
{  
	int i,k;
	int ans=-1;
	int arr[15];

	for(i=0;i<15;i++)
	{
       scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	int sz=sizeof(arr)/sizeof(arr[0]);
	int left=0;
	int right=sz-1;
	while(left<=right)
	{
    	int mid=(left+right)/2;
	    if(arr[mid]==k)
		{
		 ans=mid;
         break;
		}
     	else if(arr[mid]>k)
		{
		 right=mid-1;
		}
	    else
		{
		 left=mid+1;
		}
	}
	if(ans==-1)
	{
		printf("None\n");
	}
	else
	{
		printf("%d\n",ans+1);
	}
		return 0;
}
