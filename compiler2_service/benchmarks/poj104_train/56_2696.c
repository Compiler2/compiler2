#define NUM_ITER 948449

#include <header.h>

int main_bench()
{
    void a(int x,int y);
    int n;
    my_scanf("%d",&n);
    a(n,10000);
        return 0;
}


void a(int x,int y)
{
     int t,k,p;
     
     t=x/y;
     x=x-t*y;
     if(y==1)my_printf("%d",t);
     else
     {
         a(x,y/10);
         if(t==0);
         else my_printf("%d",t);
     }
    
}