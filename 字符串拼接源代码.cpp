#include <stdio.h>
int main()
{
	char s1[21];
	char s2[21];
	char s[41]="0";
	int i,k=0;
	gets(s1);
	gets(s2);
    i=0;
	while(s1[i]!='\0')
	{
		s[k++]=s1[i++];
	}
	
	i=0;
	while(s2[i]!='\0')
	{
		s[k++]=s2[i++];
	}
    s[k]='\0';
	
	
	puts(s);
	
	return 0;
}