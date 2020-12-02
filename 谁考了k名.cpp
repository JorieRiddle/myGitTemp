#include<stdio.h>
#define M 105
int main(){
    int hao[M],i,j;
    double fen[M];
    int n,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        //scanf("%d %g",&hao[i],&fen[i]);
scanf("%d %lf",&hao[i],&fen[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            double tmp;
int num;
            if(fen[i]>fen[j]){
tmp=fen[i];
fen[i]=fen[j];
fen[j]=tmp;
num=hao[i];
hao[i]=hao[j];
                hao[j]=num;
}
        }
    }
    printf("%d %g\n",hao[n-k],fen[n-k]);
    return 0;
}