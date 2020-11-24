#include <stdio.h>
int main()
{
	int m,s,i;
	for(m=2;m<1000;m++)
	{
		s=0;
		for(i=1;i<m;i++)
		{
			if((m%i)==0) //两个括号
			{
              s=s+i;
			}

		}
		if(m==s)
		{
			printf("%d\n",m);
		}
	}//真因子包括这个数本身
	return 0;
}