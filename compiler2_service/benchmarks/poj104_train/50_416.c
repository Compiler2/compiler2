#define NUM_ITER 896759

#include <header.h>

int main_bench(){
    int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,w,a,b,c,d;
    my_scanf("%d",&w);
    a=w+12;
    if(a%7==5)
    {
        my_printf("1\n") ;   
    }
    for(i=0;i<11;i++)
    {
        a=w+m[i]+12;
        if(a%7==5)
      {
            d=i+2;
        my_printf("%d\n",d) ;   
      }
      b=m[i+1] ;
      c=m[i]; 
      m[i+1]=b+c;
    }
    return 0;
        
}