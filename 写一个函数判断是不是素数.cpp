#include <stdio.h>
#include <math.h>
//是素数返回1，不是素数返回0
int is_prime(int n)            //n=i    定义函数时必须在括号里再加一个参数
{                              //素数只会被1和本身相除
  int j=0;
for(j=2;j<n;j++)
{                         //不能在里面加上else 因为如果是n为99，j=2相除不成立则判断不为素数，而j应该从2-98一个一个式。下面是错误示范：
	                        
	  if(n%j==0)                                             //for (j=2;;j<n;j++)
		  return 0;	  	                                     // {
}                                                            //if(n%j==0)
   return 1;                                                 //  return 0;
}                                                            //else
                                                             //  return 1;
                                                             //}                                                
int main()																																		
{
   //打印一百到两百之间的素数
   int i=0;
   for(i=100;i<=200;i++)
   {
    //判断i是否为素数
	   if(is_prime(i)==1)   //1为真是素数
		   printf("%d\n",i);
   
   }
}


