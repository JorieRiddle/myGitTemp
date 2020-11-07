#include <stdio.h>
int main()
{
	char killer;//char
	for(killer='A';killer<='D';killer++)
	{
		if((killer!='A')+(killer=='C')+(killer=='D')+(killer!='D')==3)//Èý¸ö==
		{
         printf("%c\n",killer);
		}

	}
	return 0;
}
