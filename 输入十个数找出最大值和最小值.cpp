#include <stdio.h>
int main()
{
   int a[10],i,max,min;
   for(i=0;i<10;i++)
	   scanf("%d",&a[i]);
   max=min=a[0];
   for(i=1;i<10;i++)
   {
    if(a[i]>max)
	max=a[i];
       
     if(a[i]<max)
	min=a[i];
   }
   printf("%d,%d",max,min);



	return 0;
}