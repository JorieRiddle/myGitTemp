#include <stdio.h>
int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int years,months,days,j=0,i;
	printf("�����������գ�\n");
	scanf("%d-%d-%d",&years,&months,&days);
	if((years%4==0 && years%100!=0) ||years%400==0)  //if���Ե���
	{
	     a[1]=29; //��int a��1��
	}
    for(i=0;i<months-1;i++)
	{
		j=a[i]+j; //��int a��i��
	}
    printf("���ǵ�%d��\n",j+days);
	return 0;
}