#include <stdio.h>
int main()
{
char c;
scanf("%c",&c);
while(c!='\n')
{
if((c>='a' && c<='z') || (c>='A' && c<='Z'))
{
	if((c>='W' && c<='z') || (c>='w' && c<='z' ))
		c=c-22;
    else 
 	c=c-4;
}
printf("%c",c);
c=getchar();
}
printf("\n");

return 0;
}