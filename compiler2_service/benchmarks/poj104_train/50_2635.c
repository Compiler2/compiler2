#define NUM_ITER 640512

#include <header.h>

main_bench()
{
    int w,i;
    my_scanf("%d",&w);
    if(w>2)
    w=w-2;
    else if(w==2)
    w=7;
    else if(w==1)
    w=6;
    int mouth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=0;i<12;i++)
    {if(w==5)
    my_printf("%d\n",i+1);
    w=w+mouth[i]%7;
    w=w%7;
  }
    
}
