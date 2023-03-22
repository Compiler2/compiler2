#define NUM_ITER 50754

#include <header.h>

int main_bench(){
    int N,i,e;
    int sz[100];
    my_scanf("%d",&N);
    for(i=0;i<N;i++){
                     my_scanf("%d",&(sz[i]));
                     }
    if(N%2==0){
               for(i=0;i<N/2;i++){
                                   e=sz[N-1-i];
                                   sz[N-1-i]=sz[i];
                                   sz[i]=e;
                                   }
    }else{
          for(i=0;i<(N-1)/2;i++){
                                 e=sz[N-1-i];
                                   sz[N-1-i]=sz[i];
                                   sz[i]=e;
                                   }
                                   }
    for(i=0;i<N-1;i++){
                     my_printf("%d ",sz[i]);
                     }
                     my_printf("%d",sz[N-1]);
    return 0;
}
                                 
                                         
