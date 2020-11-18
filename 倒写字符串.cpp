#include <stdio.h>
int main()
{
	char s1[21]="hello";
	char s2[21]=" "; //这样空格的地方才没有其他字符
	int l=0,i;
	puts(s1);
	while(s1[l]!='\0')
	{
		l++;  //l为5，第5处是\0
	}
	for(i=0;i<l;i++)
	{
		s2[i]=s1[l-i-1];
	}
	puts(s2);
	return 0;
}
