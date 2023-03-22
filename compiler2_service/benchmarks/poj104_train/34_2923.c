#define NUM_ITER 344863

#include <header.h>

int main_bench()
{
  int n,a;
  my_scanf("%d",&n);
  
  for(int i=1;i<1000;i++){
    if(n!=1&&n%2==0){
      a=n;
      n=n/2;
      my_printf("%d/2=%d\n",a,n);
    }else if(n!=1&&n%2!=0){
      a=n;
      n=n*3+1;
      my_printf("%d*3+1=%d\n",a,n);
    }else if(n==1){
      my_printf("End\n");
      break;
    }
  }
  
  return 0;
}