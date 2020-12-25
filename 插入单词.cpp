#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
	scanf("%d",&n);  //原单词个数
	char a[100][100]={'\0'};	
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);  //单词列
	}
                scanf("%s",&a[n]);    //插入单词
	for(j=0;j<n;j++)
	{
		for(i=j;i<n;i++)  //因为又插入了一个所以不要n-1
			if(strcmp(a[i],a[i+1])>0)  //字符串首字母a[i]>a[j]
		{
			strcpy(t,a[i]);
			strcpy(a[i],a[i+1]);
			strcpy(a[i+1],t);
		}
	}
	for(i=0;i<=n;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}