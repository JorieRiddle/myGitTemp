#include <stdio.h>
int main()
{   
	char ch;
    while((ch=getchar())!=EOF)
    {
        if(ch >= 'A' && ch <= 'Z') 
		{
		ch=ch+32;
		getchar();
		}
        else  if(ch >= 'a' && ch <= 'z')
		{
		ch=ch-32;
		getchar();
		}
		printf("%c",ch);
           
    }
    return 0;
}