#include <stdio.h>
void bubble_sort (int arr[],int sz)  //����
{
	int i,j,tmp;
	for(i=0;i<sz-1;i++)
	{
		for(j=0;j<sz-1-i;j++)
		{
          if (arr[j]>arr[j+1])
          {
			  tmp=arr[j];
		      arr[j]=arr[j+1];
			  arr[j+1]=tmp;
		  }
		}
	}
}
int main()
{   
	int i;
	int arr[10];
	for(i=0;i<10;i++)
	{
      scanf("%d",&arr[i]);
	}
	int sz=sizeof(arr)/sizeof(arr[0]); //���ܷ��ں�����
	bubble_sort(arr,sz);  //sz�������
	for(i=0;i<sz;i++)
	{
      printf("%d",arr[i]);
	  printf("\n");
	}
    return 0;
}