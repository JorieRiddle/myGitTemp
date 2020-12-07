#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,j,i,f,c,k,t,z;
	int *array;
	scanf("%d",&n);   //总人数
	array=(int*)malloc(n*sizeof(int));  //作用同几座山那道题一样
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);  //每个人排队时间
	while(n)
	{
		f=0;
		for(j=1;j<n;j++)
		{
			if(array[j]<array[j-1]） //前面一个人等待时间长
			{
			   c=array[j-1];
			   array[j-1]=array[j];
			   array[j]=c;
			   f=1;
			}

		}
		if(f==0)
			break;
	}
	z=0; //重新排好序后算时间
	for(k=0;k<n;k++)
	{
		t=array[k]*(n-k-1);  //最小等待时间*总人数+第二小等待时间*剩下的人，因为第一个人办好，第二个人时间从0开始办
		z=z+t; //总时间
	}
	printf("%d",z);
                free(array);
	return 0;
}