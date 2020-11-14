#include <stdio.h>
Fib(int n)  //效率低超慢
{
 int ret;
 if(n<=2)
 {
 return 1;
 }
 else
 {
	 ret=Fib(n-1)+Fib(n-2);
     return ret;
 }
}
int main()
{
  int n=0;
  int ret=0;
  scanf("%d",&n);
  //TDD 测试驱动开发
  ret=Fib(n);
  printf("ret=%d\n",ret);
  return 0;
}