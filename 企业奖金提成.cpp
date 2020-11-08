#include <stdio.h>
int main()
{
   int x;
   float y;
   scanf("%d",&x);
   if(x<=10)
   {
   y=0.1*x;
   }
   else if(x>10 && x<=20)
   {
   y=1+0.075*(x-10);
   }
   else if(x>20 && x<=40)
   {
   y=1+0.75+0.05*(x-20);
   }
   else if(x>40 && x<=60)
   {
   y=1+0.75+1+0.03*(x-40);
   }
   else if(x>60 && x<=100)
   {
   y=1+0.75+1+0.6+0.015*(x-60);
   }
   else if(x>100)
   {
   y=1+0.75+1+0.6+0.6+0.01*(x-100);
   }
   printf("%.2f\n",y);
   return 0;
}