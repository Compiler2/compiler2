#include <header.h>

int main_bench(){
  int n,i,j,k;
  my_scanf("%d",&n);
  if(n==1){
	  my_printf("End\n");
  }
  else{while(n!=1){
	  if(n%2==0){j=n/2; my_printf("%d/2=%d\n",n,j);}
  else {j=n*3+1;my_printf("%d*3+1=%d\n",n,j);}
  n=j;
  }my_printf("End\n");}
  
return 0;}
