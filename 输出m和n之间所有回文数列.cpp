#include <stdio.h>
int reverse(int n)
{
	int m=0;
	while(n)
	{
		m=m*10+n%10;
		n=n/10;
	}
	return m;
}//��Ϊis������ʹ��reverse����Ҫ������
int IsPalindrome(int n)
{
   return n==reverse(n);
} 

int main()
{
	int m,n,i;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(IsPalindrome(i))
			printf("%d\n",i);
	}
	return 0;
}