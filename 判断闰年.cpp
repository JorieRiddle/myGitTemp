#include <stdio.h>
int main()
{
	int years;
	scanf("%d",&years);
	if((years%4==0 && years%100!=0) ||years%400==0)  
	{
		printf("����\n");
	}
	else
	{
		printf("����\n");
	}
	return 0;


}