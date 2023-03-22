#define NUM_ITER 4560

#include <header.h>

int main_bench(){
    int a,b,c,d,e;
    int x[60000],y[60000];
    my_scanf("%d",&a);
    for(b=1;b<=a;b++){
        my_scanf("%d %d",&(x[b]),&(y[b]));
    }
    for(e=1;e<a;e++){
      for(b=1;b<=a-e;b++){
        if(x[b]>x[b+1]){
            c=x[b];
            d=y[b];
            x[b]=x[b+1];
            y[b]=y[b+1];
            x[b+1]=c;
            y[b+1]=d;
           }
        }
    }
    for(b=1;b<a;b++){
      if(y[b]<x[b+1]){
       my_printf("no");
       break;
        }
    else if(b==a-1){
          if(y[b]>y[b+1]){
          d=y[b];
         y[b]=y[b+1];
         y[b+1]=d;
      }
      my_printf("%d %d",x[1],y[a]);}
       else if(y[b]>y[b+1]){
          d=y[b];
         y[b]=y[b+1];
         y[b+1]=d;
      }
}
    return 0;
}
   
