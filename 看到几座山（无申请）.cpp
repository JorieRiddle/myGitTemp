#include <stdio.h>
#define M 100000
int main()
{
	int n1,i,k,j,m;
	long int array[M];
	scanf("%d\n",&n1);    //��ʾ��n��ɽ
	for(j=0;j<n1;j++)
		scanf("%ld",&array[j]);  //����ɽ�ĸ߶�
	k=1;         //k��ʾ�ܿ�����ɽ������
	m=array[0];  //�����һ��ɽΪ���ֵ
	for(i=1;i<n1;i++)
	{
		if(array[i]>m)  //���бȽϣ��ó�����ɽ
		{
			m=array[i];
			k=k+1;     //ÿһ�αȽϳɹ���k+1����3 4 5 4 7 1 
			continue;  //break������ѭ����continue�ǽ�������ѭ������Ϊ����û�д�������continueû������
		}
	}
    printf("%d",k);
	return 0;
}
