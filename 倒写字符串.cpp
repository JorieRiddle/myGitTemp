#include <stdio.h>
int main()
{
	char s1[21]="hello";
	char s2[21]=" "; //�����ո�ĵط���û�������ַ�
	int l=0,i;
	puts(s1);
	while(s1[l]!='\0')
	{
		l++;  //lΪ5����5����\0
	}
	for(i=0;i<l;i++)
	{
		s2[i]=s1[l-i-1];
	}
	puts(s2);
	return 0;
}
