#define NUM_ITER 1303340

#include <header.h>

int main_bench()
{
 int i=1,n,m,p;
 my_scanf("%d",&n);
 if(n==10000)my_printf("00001");
 else if(n<=9) m=1;
 else if(n<100) m=2;
 else if(n<1000) m=3;
 else if(n<10000) m=4;
 while(i<=m)
 {
    p=n-n/10*10;
    my_printf("%d",p);
    n=n/10;
    i++;
 }
 return 0;
 }
