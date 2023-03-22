#define NUM_ITER 52666

#include <header.h>

int main_bench()
{
    int a,b,c,n,k,i;
i=0;
    int sz[10000];
    my_scanf("%d %d",&n,&k);
    for(a=0;a<n;a++){
      my_scanf("%d ",&(sz[a]));
    }
    for(a=0;a<n;a++){
      for(b=n-1;b>a;b--){
        c=sz[a]+sz[b];
        if(c==k){
        i=n*n*n;
        break;
        }else{
         i++;
        }
      }
      if(i==n*(n-1)/2){
        my_printf("no");
        break;
     }else if(i==n*n*n){
         my_printf("yes"); 
         break;
     }
   }
return 0;
}