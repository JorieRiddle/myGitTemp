#include <stdio.h>
int main()
{
	char s1[21];
	char c;
	int len=0,i;
	gets(s1);
	while(s1[len]!='\0')
	{
		len++;
	}
	printf("%d\n",len);
    int n=len/2;
	for(i=0;i<n;i++)
	{
		c=s1[i];
	    s1[i]=s1[len-1-i];
		s1[len-1-i]=c;
	}
	s1[len]='\0';  //可无，因为变化始终在s1
	puts(s1);
	return 0;
}