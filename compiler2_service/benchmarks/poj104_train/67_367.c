#define NUM_ITER 31516

#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    int sz[n][2];
    double p[n];
    int i,j;
    for(i=0;i<n;i++){
        my_scanf("%d %d\n",&sz[i][0],&sz[i][1]);
        p[i]=(double)sz[i][1]/sz[i][0];
    }
    for(i=1;i<n;i++){
       if(p[i]-p[0]>0.05){
          my_printf("better\n");
       }
       else if(p[0]-p[i]>0.05){
          my_printf("worse\n");
       }
       else{
          my_printf("same\n");
       }
    }
    return 0;
}
   