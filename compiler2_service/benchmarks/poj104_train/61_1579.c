#define NUM_ITER 7114

#include <header.h>

int f(int a);
int main_bench()
{
   int n,a,i;
   my_scanf("%d",&n);
   for(i=1;i<=n;i++){
       my_scanf("%d",&a);
       my_printf("%d\n",f(a));
   }
   return 0;
}
int f(int a){
    if(a==1||a==2){
       return 1;
    }
    int b,c,d,k;
    c=1;
    d=1;
    for(k=3;k<=a;k++){
        b=c;
        c=d;
        d=b+c;
    }
    return d;
}
   