#include <stdio.h>
int main()
{
	int x;
    scanf("%d",&x);//输入时不要加\n
    if(x%2==0)
    {
		printf("o\n");
	}
	else
	{
		printf("1\n");
	}


	return 0;
}
//for(;;) 不是逗号