#include <stdio.h>
int main()
{
	int r,h,c;
	int i=0;
	printf("rooster\then\tchick\n");
	for(r=0;r<22;r++)
	{
		for(h=0;h<33;h++)
		{
			for(c=0;c<33;c++)
			{
				if(100==r*5+h*3+c*1 && 100==r+h+3*c)
				{
						printf("%-8d%-8d%-8d\n",r,h,c*3);
				i++;
				
					break;
				}

			}
		}
	}
	
	printf("%d\n",i);
	return 0;
}