#include <stdio.h>
#include <stdlib.h>
int main()
{
char ch[3][80];
int SLetter = 0,CLetter = 0,Num = 0,Space = 0,Other = 0;
for(int i = 0;i<3;i++)
{
gets(ch[i]);
for(int j = 0;j<80;j++)
{
if(ch[i][j]>=48&&ch[i][j]<58)
{
Num++;
}
else if(ch[i][j]>=65&&ch[i][j]<91)
{
CLetter++;
}
else if(ch[i][j]>=97&&ch[i][j]<123)
{
SLetter++;
}else if(ch[i][j]==' ')
{
Space++;
}else Other++;
}//for
}//for

printf("%d,%d,%d,%d,%d\n",CLetter,SLetter,Num,Space,Other);
return 0;
}