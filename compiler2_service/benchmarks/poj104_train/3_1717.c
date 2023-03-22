#include <header.h>

int main_bench( ){
      int n,k,a,b,c;
      c=0;
      int sz[1000];
      my_scanf("%d%d",&n,&k);
      for(a=0;a<n;a++){
                  my_scanf("%d",&sz[a]);
                  }
      for(a=0;a<(n-1);a++){
                 for(b=(a+1);b<n;b++){
                      if(sz[a]+sz[b]==k){
                               my_printf("yes");
                               return 0;
                               }
                      if(sz[a]+sz[b]!=k){
                               c++;
                                }
                  }
       }
       if(c==n*(n-1)/2){
                 my_printf("no");
                 return 0;
                }
}
    