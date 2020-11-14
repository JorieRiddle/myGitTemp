#include <stdio.h>
#include<string.h>
int my_strlen(char*str)
{
  int count=0;
  while(*str!='\0')  //单引号
  {
    count++;
	str++;  
  }
   return count;

}

int main()
{
  char arr[]="bit";              //双引号
  int len=my_strlen(arr);        //求字符串长度
  printf("len=%d\n",len);        //arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
  return 0;
}