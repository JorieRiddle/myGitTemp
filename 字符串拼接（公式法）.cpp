#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100],s2[50];
	gets(s1);
	gets(s2);
	strcat(s1,s2);
    puts(s1);


	return 0;
}
