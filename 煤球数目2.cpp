#include <stdio.h>
int main()
{
	int a,x=0,t=0;
	for(a=1;a<=100;a++)
	{  
	   x=x+a; //ÿһ�����Ŀ
	   t=x+t; //�˲��֮ǰ�Ĳ������
	   
	}
	printf("%d\n",t);
	return 0;
}