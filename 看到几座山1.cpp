#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n1,i,k,j,m;
	long int *array; //����һ�������͵�ָ�����
	scanf("%d",&n1);//��ʾ��n��ɽ
    array=(long int*)malloc(n1*sizeof(long int));  //��̬�ռ�����
	//��Ϊʹ�õ��Ƕ�̬���飬Ҳ����˵�޷�ȷ�������С���Բ�����ռ�
	//ǰ���ǣ����������������ͣ�������������Ĵ�СΪn1*8���ֽڴ�С�Ŀռ�

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
			//continue;  //break������ѭ����continue�ǽ�������ѭ������Ϊ����û�д�������continueû������
		}
	}
    printf("%d",k);
	free(array);  //�ռ��ͷţ���returnǰ���ͷţ�
	return 0;
}
