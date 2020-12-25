//≥…º®≈≈–Ú
#include <stdio.h>
#include <string.h>
#define M 20
int main()
{
	int n,k,i,j;
	int fen[M];
    char name[M][M];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&name[i],&fen[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			char var[M];
			int tmp;
			if(fen[i]<fen[j])
			{
		     	strcpy(var,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],var);
				tmp=fen[i];
				fen[i]=fen[j];
				fen[j]=tmp;
			}
			else if(fen[i]==fen[j] && (strcmp(name[j],name[i])<0))
			{
                strcpy(var,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],var);
				tmp=fen[i];
				fen[i]=fen[j];
				fen[j]=tmp;
			}
		}
	}
	for(i=0;i<n;i++)
    printf("%s %d\n",name[i],fen[i]);
	return 0;
}