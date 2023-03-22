#define NUM_ITER 224774

#include <header.h>

int main_bench(){
    int n,m,a[5][5],i,j,t;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            my_scanf("%d",&(a[i][j]));
        }
    }
    my_scanf("%d %d",&n,&m);
    if(n>=0&&n<=4&&m>=0&&m<=4){
        for(i=0;i<5;i++){
            t=a[n][i];
            a[n][i]=a[m][i];
            a[m][i]=t;
        }
        for(j=0;j<4;j++){
            my_printf("%d ",a[0][j]);
        }
        my_printf("%d\n",a[0][4]);
        for(j=0;j<4;j++){
            my_printf("%d ",a[1][j]);
        }
        my_printf("%d\n",a[1][4]);
        for(j=0;j<4;j++){
            my_printf("%d ",a[2][j]);
        }
        my_printf("%d\n",a[2][4]);
        for(j=0;j<4;j++){
            my_printf("%d ",a[3][j]);
        }
        my_printf("%d\n",a[3][4]);
        for(j=0;j<4;j++){
            my_printf("%d ",a[4][j]);
        }
        my_printf("%d\n",a[4][4]);
    }else{
        my_printf("error");
    }
    return 0;
}
