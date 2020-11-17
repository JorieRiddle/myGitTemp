#include <stdio.h>
int main()
{
    int i,j;
	for(i=1;i<8;i++)
	{   
		//一共7行
		//前一半
		for(j=1;j<=i;j++)
		{
         printf("%d",i);
		}
        //中间空行
		for(j=1;j<=14-2*i;j++)
		{
			printf(" ");
		}
		//后半
			for(j=1;j<=i;j++)
		{
         printf("%d",i);
		}
			printf("\n");
	}
    return 0;
}