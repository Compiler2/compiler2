#define NUM_ITER 1068761

#include <header.h>

int main_bench(){
    int i,a=0,n,sz[101],b=0,c=0,d=0,zong=0,e=0,f=0,g;
    double aa,bb,cc,dd;
    my_scanf ("%d",&n);
    a=n/100;
    g=n-a*100; 
    b=g/50;
    g=g-b*50;
    c=g/20;  
    g=g-c*20;
    d=g/10;
    g=g-d*10;
    e=g/5;
    g=g-e*5;
    f=g;
    my_printf("%d\n",a);
     my_printf("%d\n",b);
      my_printf("%d\n",c);
       my_printf("%d\n",d);
        my_printf("%d\n",e);
         my_printf("%d\n",f);
                                      return 0;
} 