#include <stdio.h>
Fib(int n)  //Ч�ʵͳ���
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
  //TDD ������������
  ret=Fib(n);
  printf("ret=%d\n",ret);
  return 0;
}