#include <header.h>

int main_bench()
{
  int n,i,k,sum=0;
  my_scanf("%d",&n);
  int x[n];
  for(i=0;i<n;i++){
      my_scanf("%d",&x[i]);
      for(k=0;k<i;k++){
          if(x[k]==x[i]){
             i--;
             n--;
             break;
             }
          }
  }
  my_printf("%d",x[0]);
  for(i=1;i<n;i++){
      my_printf(" %d",x[i]);
  }    
  return 0;
}    
