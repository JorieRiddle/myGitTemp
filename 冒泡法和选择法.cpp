#include <stdio.h>
#define n 3
int main()
{
	int a[n],b[n];
	int i=0;
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	  scanf("%d",&b[i]);
	int m,j;
	int t; 
	for(i=0;i<n-1;i++)  //Ñ¡Ôñ·¨
	{
     	m=i;
     	for(j=i+1;j<n;j++)
		{
	    	if(a[m]>a[j])
			m=j;
		}
	    if(m!=i)
		{
		    t=a[m];
		    a[m]=a[i];
		    a[i]=t;
		}
	}

	for(i=0;i<n;i++)  //Ã°ÅÝ·¨
	{
     	for(j=0;j<n-1-i;j++)
		{
	    	if(b[j]>b[j+1])
			{
		      t=b[j];
		      b[j]=b[j+1];
		      b[j+1]=t;
			}
		
		}
	   
	}

    for(i=0;i<n;i++)
	 printf("%d ",a[i]);
	 for(i=0;i<n;i++)
	 printf("%d ",b[i]);
	return 0;
}

