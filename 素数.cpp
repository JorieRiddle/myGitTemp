#include <stdio.h>
int main()
{   
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0 && n%2!=0)
		{
			printf("��������\n");
		}
		else
		{
			printf("������\n");
		}
	}
	return 0;
}