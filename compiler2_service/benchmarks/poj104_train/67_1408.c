#define NUM_ITER 27773

#include <header.h>

int main_bench(){
  int n;
  int sz[1000][2];
  int a,b,c,d;
  double jieguo[1000];
  my_scanf("%d",&n);
  for(a=0;a<n;a++){
   for(b=0;b<2;b++){
    my_scanf("%d",&sz[a][b]);                 
   }                 
  }
  for(c=0;c<n;c++){
   jieguo[c]=((1.0*sz[c][1])/(1.0*sz[c][0]))*100.0;                 
  }
  for(d=1;d<n;d++){
    if(jieguo[d]-jieguo[0]>5){
     my_printf("better\n");                          
    }
    else if(jieguo[d]-jieguo[0]<-5){
     my_printf("worse\n");                          
    }
    else if((jieguo[d]-jieguo[0]>-5.0)&&(jieguo[d]-jieguo[0]<=5.0)){
     my_printf("same\n");                          
    }                
  }
  return 0;   
}