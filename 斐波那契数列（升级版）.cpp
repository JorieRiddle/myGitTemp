#include <stdio.h>
int Fib(int n)
{
  int a=1;
  int b=1;
  int c=1;
  while(n>2)
  {
    c=a+b;
	a=b;
	b=c;
	n--;  
  }
return c;
}

int main()
{
	int ret,n;
	scanf("%d",&n);
	ret=Fib(n);
printf("%d",ret);
return 0;
}