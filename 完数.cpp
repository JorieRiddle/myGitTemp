#include <stdio.h>
int main()
{
int m,s,i;
for(m=2;m<1000;m++)
{
 s=0;  //每次都要重置s=0
 for(i=1;i<m;i++)
 if((m%i)==0 )  //双重括号
 s=s+i;
 if(s==m)
 {
 printf("%d\n",m);
 }
}
return 0;
}