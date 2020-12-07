#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n1,i,k,j,m;
	long int *array; //定义一个长整型的指针变量
	scanf("%d",&n1);//表示有n座山
    array=(long int*)malloc(n1*sizeof(long int));  //动态空间申请
	//因为使用的是动态数组，也就是说无法确定数组大小所以才申请空间
	//前面是（）中是申请后的类型，后面是所申请的大小为n1*8个字节大小的空间

	for(j=0;j<n1;j++)
		scanf("%ld",&array[j]);  //定义山的高度
	k=1;         //k表示能看到的山的数量
	m=array[0];  //假设第一座山为最大值
	for(i=1;i<n1;i++)
	{
		if(array[i]>m)  //进行比较，得出最大的山
		{
			m=array[i];
			k=k+1;     //每一次比较成功就k+1，列3 4 5 4 7 1 
			//continue;  //break是跳出循环，continue是结束本次循环，因为下面没有代码所以continue没有意义
		}
	}
    printf("%d",k);
	free(array);  //空间释放（在return前面释放）
	return 0;
}
