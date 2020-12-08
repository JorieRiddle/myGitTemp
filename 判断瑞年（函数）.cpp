#include <stdio.h>
int	isleapyear(int years)
{
	if((years%4==0 && years%100!=0) ||years%400==0)  
	{
	  return 1;
	}
	else
	{
	 return 0;
	}
}

int main()
{
	int years;
	int m;
	scanf("%d",&years);
	m=isleapyear(years);
	if(m==1)
	{
		printf("Yes");
	}
    else
	{
		printf("No");
	}
	return 0;
}