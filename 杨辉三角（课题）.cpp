#include <stdio.h>
int main()
{
    int i,j;
    int n;//自定义行数，可灵活输出杨辉三角
    scanf("%d\n",&n);
    int a[n][n];
    for(i=0;i<n;i++) 
    {
        a[i][0]=1;
        a[i][i]=1;
    }
    for(i=2;i<n;i++)
        for(j=1;j<i;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    for(i=0;i<n;i++) 
    {
        for(j=0;j<=i;j++)
            printf("%6d",a[i][j]);
        printf("\n");
    }
}