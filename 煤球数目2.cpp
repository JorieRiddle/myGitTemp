#include <stdio.h>
int main()
{
	int a,x=0,t=0;
	for(a=1;a<=100;a++)
	{  
	   x=x+a; //每一层的数目
	   t=x+t; //此层和之前的层数相加
	   
	}
	printf("%d\n",t);
	return 0;
}