#define NUM_ITER 32441

#include <header.h>

int main_bench(){
  int a,b,c,n,i,d,j;
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
    my_scanf("%d",&d);
    a=1;b=1;
    if(d<3){my_printf("1\n");break;}
    for(j=3;j<=d;j++){
      c=a+b;
      a=b;
      b=c;
    }
    my_printf("%d\n",c);
  }
  return 0;
}