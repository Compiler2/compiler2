#define NUM_ITER 8469

#include <header.h>

int main_bench()
{
    int n,i,j,x;
    int a[100000][6];
    for(i=0;i<1000000;i++){
        for(j=0;j<6;j++){
            my_scanf("%d",&a[i][j]);
        }
        if(a[i][0]!=0){
            if(a[i][5]>=a[i][2]){
                if(a[i][4]>=a[i][1]){
                    x=3600*(12+a[i][3]-a[i][0])+60*(a[i][4]-a[i][1])+(a[i][5]-a[i][2]);
                }else{
                    x=3600*(11+a[i][3]-a[i][0])+60*(60+a[i][4]-a[i][1])+(a[i][5]-a[i][2]);
                }
            }else{
                if(a[i][4]>a[i][1]){
                    x=3600*(12+a[i][3]-a[i][0])+60*(a[i][4]-1-a[i][1])+(60+a[i][5]-a[i][2]);
                }else if(a[i][4]<=a[i][1]){
                    x=3600*(11+a[i][3]-a[i][0])+60*(59+a[i][4]-a[i][1])+(60+a[i][5]-a[i][2]);
                }
            }               
            my_printf("%d\n",x);
        }else{
            break;
        }
    }
    return 0;    
}