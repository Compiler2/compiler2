#define NUM_ITER 1264

#include <header.h>

int main_bench(){
    int n,m,a,b,zongshu[1000];
    my_scanf("%d",&n);
    for(a=0;a<n;a++){
        my_scanf("%d",&m);
        if(m==0){
            my_printf("60\n");
            continue;
        }
        for(b=1;b<=m;b++){
            my_scanf("%d",&zongshu[b]);
        }
        for(int k=m;k>=0;k--){
            if((zongshu[k]+3*k)<=60){
                my_printf("%d\n",60-3*k);
                break;
            }
            else if((zongshu[k]+3*k-3)<=60){
                my_printf("%d\n",zongshu[k]);
                break;
            }
            else continue;
        }
    }
    return 0;

          }