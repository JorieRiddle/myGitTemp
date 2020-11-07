#include <stdio.h>
int main()
{

 int x;
 printf("input a student score:\n");
 scanf("%d",&x);
 x=x/10;
 if(x>=0 && x<101)
 {
	 switch(x)
	 {
	 case 10:
		 printf("A\n");
		 break;
		 
	 case 9:
		 printf("B\n");
		 break;
		 
	 case 8:
		 printf("C\n");
		 break;
		 
	 case 7:
		 printf("D\n");
		 break;
	 default:
		 printf("F\n");
	 }
 }
 else
 {
	 printf("input error!");
 }
	return 0;
}