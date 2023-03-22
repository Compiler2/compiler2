#define NUM_ITER 38196

#include <header.h>

int main_bench(){
  int n,a[200],b[200],sa=0,sb=0,i;
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
    my_scanf("%d%d",&a[i],&b[i]);
    if(a[i]==b[i]+1){sb++;}
    else if(b[i]==a[i]+1){sa++;}
    else if(a[i]==0&&b[i]==2){sb++;}
    else if(a[i]==2&&b[i]==0){sa++;}
  }
    if(sa==sb){my_printf("Tie");}
    else if(sa>sb){my_printf("A");}
    else{my_printf("B");}
    return 0;
}    