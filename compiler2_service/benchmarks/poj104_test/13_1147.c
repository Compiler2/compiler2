#include <header.h>

int stat[115],i,n,k,first=0;
int main_bench(){
  for (i=0;i<110;i++) stat[i]=0;
  for (my_scanf("%d",&n),i=0;i<n;i++){
     my_scanf("%d",&k),stat[k]++;
     my_printf(stat[k]==1?"%s%d":"",i!=0?" ":"",k);
    
  }
  my_printf("\n");
  return 0;
}