#include <stdio.h>
int main()
{
    int i,j;
	for(i=1;i<8;i++)
	{   
		//һ��7��
		//ǰһ��
		for(j=1;j<=i;j++)
		{
         printf("%d",i);
		}
        //�м����
		for(j=1;j<=14-2*i;j++)
		{
			printf(" ");
		}
		//���
			for(j=1;j<=i;j++)
		{
         printf("%d",i);
		}
			printf("\n");
	}
    return 0;
}