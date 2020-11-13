#include <stdio.h>
int binary_search(int arr[],int k,int sz)  //������ָ�벻������ 4
{
  int left=0;
  int right=sz-1;
  while(left<=right) //1
  {
     int mid=(left+right)/2;
	 if(arr[mid]<k)
	 {
	 left=mid+1;
	 }
     else if(arr[mid]>k)
	 {
	 right=mid-1;
	 }
     else
	 {
	 return mid;
	 }  
  }
return -1;
}
int main()
{
 int arr[]={1,2,3,4,5,6,7,8,9,10};
 int k=7;
 int sz=sizeof(arr)/sizeof(arr[0]); //���ܷ�����������Ϊarr�����治�����飬��ָ�� 2
 int ret=binary_search(arr,k,sz); //3
 if(ret==-1)
 {
	 printf("�Ҳ���ָ��������\n");
 }
 else
 {
	 printf("�±���:%d\n",ret);
 }
 return 0;
}