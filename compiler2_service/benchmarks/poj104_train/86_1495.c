#define NUM_ITER 2379

#include <header.h>

int main_bench(){
  int i,j,k,h,n,c,t,y,a[70],b[30];
  my_scanf("%d",&n);
  
  for(i=0;i<n;i++){
    my_scanf("%d",&h);
    for(j=0;j<h;j++){
      my_scanf("%d",&a[j]);
    }
    c=0;
    t=1;
    while(t<=60){
      c++;
      y=0;
      for(j=0;j<h;j++){
        if(c==a[j]){
          t+=4;
          y=1;
          break;
        }
      }
      if(y==0){
        t++;
      }
  
    }
    b[i]=c;
  }
  for(i=0;i<n;i++){
    my_printf("%d\n",b[i]);
  }
  
return 0;




}