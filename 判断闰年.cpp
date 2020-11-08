#include <stdio.h>
int main()
{
	int years;
	scanf("%d",&years);
	if((years%4==0 && years%100!=0) ||years%400==0)  
	{
		printf("ÈòÄê\n");
	}
	else
	{
		printf("²»ÊÇ\n");
	}
	return 0;


}