#define NUM_ITER 11078

#include <header.h>

int main_bench(){
  int a,b,c,d,e,f,g,h,i,j,k,l,o,p,z,q,t;
  while(1){
  my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
  if(a==0){break;}
  d+=12;

  if(f>=c){
    q=f-c;
  }else{
    q=f+60-c;
	e-=1;
  }
  if(e>=b){
    p=e-b;
  }else{
    p=e+60-b;
	d-=1;
  }
  o=d-a;
  t=o*60*60+p*60+q;
my_printf("%d\n",t);
  }
  
  return 0;
}