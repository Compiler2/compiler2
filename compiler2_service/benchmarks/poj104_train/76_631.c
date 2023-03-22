#define NUM_ITER 3951

#include <header.h>

int main_bench(){
    int n,i,j,h,p=1;
    my_scanf("%d",&n);
    int z[n];
    int y[n];
    for(i=0;i<n;i++){
        my_scanf("%d %d",&z[i],&y[i]);
    }
    for(j=1;j<=n;j++){
        for(i=0;i<n-j;i++){
            if(z[i]>z[i+1]){
                h=z[i];
                z[i]=z[i+1];
                z[i+1]=h;
            }
           if(y[i]>y[i+1]){
               h=y[i];
               y[i]=y[i+1];
               y[i+1]=h;
           }}}
          for(i=0;i<n-1;i++){
              if(z[i+1]>y[i]){
                  my_printf("no");
                  p=0;
                  break;
              }
          }
          if(p==1){
              my_printf("%d %d",z[0],y[n-1]);
          }
         return 0;
}



