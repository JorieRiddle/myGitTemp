#include <stdio.h>
int flag(int a,int n)//����ÿһ�ε�ֵ 
{
	int p=a;
	for(int i=2;i<=n;i++)
	p=p*10+a;
	return p;
}
int main()
{
	int n,a;
	int s,i;
	scanf("%d%d",&n,&a);
	s=0;
	for(i=1;i<=n;i++)//ѭ����ͣ�������a,aa,...�� 
	{
	   s=s+flag(a,i);
	}
	printf("%d",s);
	 
 } 