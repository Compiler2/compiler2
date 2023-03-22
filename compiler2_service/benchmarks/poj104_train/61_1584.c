#define NUM_ITER 6615

#include <header.h>

int main_bench(){
  int n;
  my_scanf("%d",&n);
  for(int i=1;i<=n;i++){
    int a;
    my_scanf("%d",&a);
    if(a==1||a==2){
      my_printf("1\n");
    }else{
      int x=1,y=1,z;
      for(int m=3;m<=a;m++){
         z=x+y;
         x=y;
         y=z;
      }
      my_printf("%d\n",y);
    }
   }
   return 0;
}