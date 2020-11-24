#include <stdio.h>
int main()
{
  float f1,f2;
  f1=1;
  f2=2;
  for(int i=1;i<=36;i++)
  {
      printf("%20.0f%20.0f",f1,f2);
	  if(i%2==0)
	  {
		  printf("\n");
	  }
	  f1=f1+f2;
	  f2=f1+f2;
  }
return 0;
}