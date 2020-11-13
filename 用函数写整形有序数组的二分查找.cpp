#include <stdio.h>
int binary_search(int arr[],int k,int sz)  //这里是指针不是数组 4
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
 int sz=sizeof(arr)/sizeof(arr[0]); //不能放在上面求，因为arr在上面不是数组，是指针 2
 int ret=binary_search(arr,k,sz); //3
 if(ret==-1)
 {
	 printf("找不到指定的数字\n");
 }
 else
 {
	 printf("下表是:%d\n",ret);
 }
 return 0;
}