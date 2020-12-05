#include <stdio.h>
#include <string.h>
 
int main()
{ 
    int total = 0,i = 0,j = 0;
    int model = 0,temp = 0;
    int data[100];
    char name[100][100],var[100];
    scanf("%d",&total);
    scanf("%d",&model);
    for(;i < total;i ++)
    {
        scanf("%s %d",name[i],&data[i]);
    }
    if(model == 0)
    {
        for(i = 0;i < total;i ++)
        {
            for(j = 0;j < total-i-1;j ++)
            {
                if(data[j] < data[j+1])
                {
                    temp = data[j];
                    data[j] = data[j+1];
                    data[j+1] = temp;
                    strcpy(var,name[j]);
                    strcpy(name[j],name[j+1]);
                    strcpy(name[j+1],var);
                }
            }
        }
    }
    else if(model == 1)
    {
        for(i = 0;i < total;i ++)
        {
            for(j = 0;j < total-i-1;j ++)
            {
                if(data[j] > data[j+1])
                {
                    temp = data[j];
                    data[j] = data[j+1];
                    data[j+1] = temp;
                    strcpy(var,name[j]);
                    strcpy(name[j],name[j+1]);
                    strcpy(name[j+1],var);
                }
            }
        }
    }
    for(i = 0;i < total;i ++)
    {
        printf("%s %d\n",name[i],data[i]);
    }
    return 0;
}