#include <stdio.h>
int main()
{
    int a,b,c,max;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		max=a;
	else
		max=b;
	if(c>max)
		max=c;
	printf("%d\n",max);

//    max=(a>b ? a :b);
//	max=(c>max ? c: max);
//	printf("%d",max\n);





	return 0;
}