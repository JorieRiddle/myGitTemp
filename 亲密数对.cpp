#include <stdio.h>
#include <stdlib.h>
int sum_of_factor(int n)
{
    int i,sum = 0;
    for(i=2;i<n;i++)
    {
         if(n%i==0)
         {
              sum+=i; 
         }   
    }
    return sum;
}

int main()
{   
	int i,m,n;
	scanf("%d%d",&m,&n);
    for(i=m;i<n;i++)
    {      
        //printf("%d--%d--%d\n",i,sumf(i),sumf(sumf(i)));
        if(i == sum_of_factor(sum_of_factor(i)))
        {
           printf("%d %d\n",i,sum_of_factor(i));
        }    
    } 
    return 0;
}

