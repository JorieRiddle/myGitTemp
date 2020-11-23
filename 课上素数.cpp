#include <stdio.h>
int main()
{
	int a,b,n=0;
	scanf("%d%d",&a,&b);
	int flag=1;
    for(int i=a;i<=b;i++)
	{
      for(int j=2;j<i;j++)
	  {
		  if(i%j==0)
		  {
			  flag=0;
			  break;
		  }
	  }
	  	if(flag==1 && i%10==7)
		{
			n+=1;
			printf("%d\n",i);
		}
	flag=1; //在第一个for里形成循环
	}
printf("%d\n",n);
	return 0;
}