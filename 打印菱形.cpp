#include <stdio.h>
int main()
{
 int line=6;
 int i;
//��ӡ�ϰ벿�֣������м�һ�� 
 for(i=1;i<=line;i++)
 {
	 //��ӡһ��
	 //��ӡ�ո�
	 int j;
     for(j=1;j<=line-i;j++)
		 {
			 printf(" ");
		 }
	 //��ӡ*
	 for(j=0;j<2*(i-1)+1;j++)
	 {
		 printf("*");
	 }
	 printf("\n");  //���бز�����	 
 }
 //��ӡ�°벿��
for(i=1;i<=line-1;i++)
 {
	 //��ӡһ��
	 //��ӡ�ո�
	 int j=0;
     for(j=0;j<i;j++)
		 {
			 printf(" ");
		 }
	 //��ӡ*
	 for(j=0;j<2*(line-i)-1;j++)
	 {
		 printf("*");
	 }
	 printf("\n");	 
 }
}