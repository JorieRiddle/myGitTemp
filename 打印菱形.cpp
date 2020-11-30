#include <stdio.h>
int main()
{
 int line=6;
 int i;
//打印上半部分，包括中间一行 
 for(i=1;i<=line;i++)
 {
	 //打印一行
	 //打印空格
	 int j;
     for(j=1;j<=line-i;j++)
		 {
			 printf(" ");
		 }
	 //打印*
	 for(j=0;j<2*(i-1)+1;j++)
	 {
		 printf("*");
	 }
	 printf("\n");  //换行必不可少	 
 }
 //打印下半部分
for(i=1;i<=line-1;i++)
 {
	 //打印一行
	 //打印空格
	 int j=0;
     for(j=0;j<i;j++)
		 {
			 printf(" ");
		 }
	 //打印*
	 for(j=0;j<2*(line-i)-1;j++)
	 {
		 printf("*");
	 }
	 printf("\n");	 
 }
}