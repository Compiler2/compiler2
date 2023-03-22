#define NUM_ITER 1396995

#include <header.h>

int main_bench()
{
  int n,a,b,c,d,e,f;
  my_scanf("%d",&n);
  if(n>=100){
  a=(int)n/100;
  }
  else{
  a=0;
  }
  if(n%100>=50){
  b=(int)(n%100)/50;
  }
  else{
  b=0;
  }
  if(n%50>=20){
  c=(int)(n%50)/20;
  }
  else{
  c=0;
  }
  if((n%50)%20>=10){
  d=((n%50)%20)/10;
  }
  else{
  d=0;
  }
  if(n%10>=5){
  e=(n%10)/5;
  }
  else{
  e=0;
  }
  f=n%5;
 my_printf("%d\n",a);
  my_printf("%d\n",b);
  my_printf("%d\n",c);
  my_printf("%d\n",d);
  my_printf("%d\n",e);
  my_printf("%d\n",f);

  return 0;
}