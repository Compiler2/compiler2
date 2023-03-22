#include <header.h>

int main_bench(){
   int n,i,m;
   my_scanf("%d %d\n",&n,&m);
   int *sz=(int*)malloc(sizeof(int)*n);
     for(i=0;i<n-1;i++){
       my_scanf("%d",&sz[i]);
     }
       my_scanf("%d",&sz[n-1]);
       m=m%n;
   for(i=n-m;i<n;i++){
     my_printf("%d ",sz[i]);
   }
    for(i=0;i<n-m-1;i++){
       my_printf("%d ",sz[i]);
    }
      my_printf("%d",sz[n-m-1]);
  free(sz);
  return 0;
}
