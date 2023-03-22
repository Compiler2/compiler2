#define NUM_ITER 56467

#include <header.h>

int main_bench(){
  int n,i,m,sz[100];
  my_scanf("%d%d",&n,&m);
  for(i=0;i<n;i++){
	  my_scanf("%d",&sz[i]);
  }
  for(i=n-m;i<n;i++){
  my_printf("%d",sz[i]);
  my_printf(" ");
}
  for(i=0;i<n-m-1;i++){
	  my_printf("%d",sz[i]);
	  my_printf(" ");
  }
  my_printf("%d",sz[n-m-1]);
return 0;
}


