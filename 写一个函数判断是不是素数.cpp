#include <stdio.h>
#include <math.h>
//����������1��������������0
int is_prime(int n)            //n=i    ���庯��ʱ�������������ټ�һ������
{                              //����ֻ�ᱻ1�ͱ������
  int j=0;
for(j=2;j<n;j++)
{                         //�������������else ��Ϊ�����nΪ99��j=2������������жϲ�Ϊ��������jӦ�ô�2-98һ��һ��ʽ�������Ǵ���ʾ����
	                        
	  if(n%j==0)                                             //for (j=2;;j<n;j++)
		  return 0;	  	                                     // {
}                                                            //if(n%j==0)
   return 1;                                                 //  return 0;
}                                                            //else
                                                             //  return 1;
                                                             //}                                                
int main()																																		
{
   //��ӡһ�ٵ�����֮�������
   int i=0;
   for(i=100;i<=200;i++)
   {
    //�ж�i�Ƿ�Ϊ����
	   if(is_prime(i)==1)   //1Ϊ��������
		   printf("%d\n",i);
   
   }
}


