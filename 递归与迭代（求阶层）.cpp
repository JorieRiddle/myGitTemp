#include <stdio.h>
int Fac1(int n)
{
  int i=0;
  int ret=1;
  for(i=1;i<=n;i++)
  {
ret=i*ret;
  }
return ret;
}
int main()
{
  int n;
  int ret;
  scanf("%d",&n);
  ret=Fac1(n);
  printf("%d\n",ret);

	return 0;
}