#define NUM_ITER 5644

#include <header.h>

int main_bench(){
  int a[1000],b[500000];
  int i,m,n,k,d=0,c;
   my_scanf("%d",&n);
   my_scanf("%d",&k);
  for(i=1;i<=n;i++){
    my_scanf("%d",&(a[i]));
  }
  for(m=1;m<n;m++){
   for(i=1;i<=n-m;i++){
    c=a[m]+a[i+m];
    d=d+1;
    b[d]=c;
   }
  }
  for(i=1;i<=d;i++){
    if(b[i]==k){
     my_printf("yes");
     break;
   }else if(i==d){
    my_printf("no");
   }  
 }
 return 0; 
}

