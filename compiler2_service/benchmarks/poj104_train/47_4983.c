#define NUM_ITER 49596

#include <header.h>

int main_bench(){
     int i,n[100],k;
     my_scanf("%d",&k);
     for(i=0;i<=k-1;i++)
     my_scanf("%d",&n[i]);
     for(i=0;i<=(k-1)/2;i++){
         int e;
        e=n[k-i-1];
       n[k-i-1]=n[i];
         n[i]=e;    
     }
     for(int i=0;i<=k-2;i++){
         my_printf("%d ",n[i]);
     }
      my_printf("%d",n[k-1]);
return 0;
}
