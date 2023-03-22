#define NUM_ITER 7613

#include <header.h>

int main_bench()
{
    int n,a,b;
    my_scanf("%d",&n);
    int i,sz[300],j,m=0;
    for(i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(sz[j]>sz[i]){
               m++;
            }
        }
        if(m==0){
        a=sz[i];
        my_printf("%d\n",a);
        break;
        }
        m=0;
    }
  m=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){

            if(sz[j]>sz[i]){
               m++;
            }
           
        }
        if(m==1){
        b=sz[i];
        my_printf("%d\n",b);
        break;
        }
        m=0;
    }
    return 0;
}

    