#include <stdio.h>
int main()
{
	int a, b,c;
	for(a=1,b=0,c=0;a<=100;a++)
	{
		b=(1+a)*a/2;
		c+=b;
	}
	printf("%d\n",c);
	return 0;
} 