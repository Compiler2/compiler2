#define NUM_ITER 4465

#include <header.h>

int main_bench(){
 int m,sz[1000];
 double sum,e,f,d,jieguo[1000];
 int a,b,c,g; 
 my_scanf("%d",&m);
 for(a=0;a<m;a++){
  my_scanf("%d",&sz[a]);                 
 }
 for(b=0;b<m;b++){
  sum=0.0;
  d=2.0;
  e=1.0;
  f=0.0;
  for(c=0;c<sz[b];c++){
    d+=f;
    sum+=(d/e);
    f=e;
    e=d;                   
  }
  jieguo[b]=sum;                 
 }
 for(g=0;g<m-1;g++){
  my_printf("%.3lf\n",jieguo[g]);                   
 } 
 my_printf("%.3lf",jieguo[m-1]);
 return 0;  
}