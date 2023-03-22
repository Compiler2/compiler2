#include <header.h>

int main_bench() {
    int n,k,i,a,sum,d;
    my_scanf("%d%d",&n,&k);
    int *sz
    =(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
                     my_scanf("%d",&sz[i]);
    }
    for(i=0;i<n-1;i++){
                       a=i+1;
                       for(a;a<n;a++){
                                      sum=sz[i]+sz[a];
                                      if(sum==k){
                                                 d=1;
                                      }
                       }
    }
    if(d==1){
             my_printf("yes");
    }else{
          my_printf("no");
    }    
    free(sz);
    return 0;
}