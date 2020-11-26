#include <stdio.h>
#include <string.h>
int main()
{
    char s1[21];
	char s2[21];
	int len=0,i;
	gets(s1);
	while(s1[len]!='\0')
	{
		len++;
	}
		printf("%d\n",len);
	for(i=0;i<len;i++)
	{
		s2[i]=s1[len-1-i];
	}
	s2[i]='\0';  //必不可少
	puts(s2);
	return 0;
}