#include<stdio.h>//������1.��С��������2.�Ӻ�ǰ�������3.��ǰ������ż��
#define n 10
int main()
{
    int a[n],i,j,t;
    for(i=0;i<n;i++)//����
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)//1.����
	{
        for(j=0;j<n-1-i;j++)
		{
            if(a[j]>a[j+1])//��С����
            {
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}//����
		}
	}
    for(i=n-1;i>=0;i--) //2.�Ӵ�С�������
	{
		if(a[i]%2!=0)//����
		{
            printf("%d ",a[i]);
		}
	}
    for(i=0;i<n;i++)//3.��С�������ż��
	{
        if(a[i]%2==0)//ż��
		{
            printf("%d ",a[i]);
		}
	}
	return 0;
}