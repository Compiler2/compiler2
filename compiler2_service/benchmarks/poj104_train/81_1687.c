#define NUM_ITER 233120

#include <header.h>

int main_bench(){
    int n,m,i,j,k;
    int jz[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            my_scanf("%d",&jz[i][j]);
        }my_scanf("%d\n",&jz[i][4]);
    }
    my_scanf("%d%d",&n,&m);
        if(n>4||m>4){
            my_printf("error");
        }else{
    if(n>m){k=n;n=m;m=k;}
    for(i=0;i<n;i++){
        for(j=0;j<4;j++){my_printf("%d ",jz[i][j]);
        }my_printf("%d\n",jz[i][4]);}
    for(j=0;j<4;j++){my_printf("%d ",jz[m][j]);
    }my_printf("%d\n",jz[m][4]);
    for(i=n+1;i<m;i++){
        for(j=0;j<4;j++){
            my_printf("%d ",jz[i][j]);
        }my_printf("%d\n",jz[i][4]);
    }
    for(j=0;j<4;j++){
        my_printf("%d ",jz[n][j]);
    }my_printf("%d\n",jz[n][4]);
    for(i=m+1;i<5;i++){
        for(j=0;j<4;j++){
            my_printf("%d ",jz[i][j]);
        }my_printf("%d\n",jz[i][4]);
    }}
    return 0;
}

