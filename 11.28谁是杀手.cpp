#include <stdio.h>
int main()
{
	char killer;
	for(killer='A';killer<='D';killer++)
	{
		if((killer!='A')+(killer=='C')+(killer=='D')+(killer!='D')==3)
		{
			printf("%c\n",killer);

		}
	}
	return 0;
}