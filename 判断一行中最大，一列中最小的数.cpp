#include<stdio.h>
#define M 5
#define N 5
int main()
{
	//����ľ���
	int i,j,maxi,k,flag;
	int arr[M][N]={{2,5,6,8,7},{1,2,4,2,0},{6,2,8,7,3},{9,3,12,2,11},{8,0,9,5,3}};
    //for(i=0;i<M;i++)
	//{
	//	for(j=0;j<N;j++)
	//	{
	  //       scanf("%d",&arr[i][j]);
	//	}
	//}
	//ȷ����ÿһ�еڼ��е��������ֵ
	for(i=0;i<M;i++)
	{
		maxi=0;
		flag=1; //��ǰ��
		for(j=1;j<N;j++)
		{
			if(arr[i][j]>arr[i][maxi]) //���κͺ�������Ƚ�
			maxi=j;
		}
	
	//ȷ��������Ƿ����������Сֵ
	for(k=0;k<M;j++)
	{        //����ֻҪ������һ�У�����Ŀ������
			if(arr[i][maxi]>arr[k][maxi])
			{
				flag=0;
				break;
			}
	}
	if(flag==1)
	printf("%d\n",arr[i][maxi]);
		else
		printf("cuo\n");
	}

	return 0;
}