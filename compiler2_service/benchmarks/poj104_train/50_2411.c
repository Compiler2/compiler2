#define NUM_ITER 428174

#include <header.h>

int main_bench()
{
    int w;
    my_scanf("%d",&w);
    w=w+12;
    for(;w>7;)
    w=w-7;
    if(w==5)
    my_printf("%d\n",1);
    w=w+31;
    for(;w>7;)
    w=w-7;
    if(w==5)my_printf("%d\n",2);
    w=w+28;
    for(;w>7;)
    w=w-7;
    if(w==5)my_printf("%d\n",3);
    w=w+31;
    for(;w>7;)
    w=w-7;
    if(w==5)my_printf("%d\n",4);
    w=w+30;
    for(;w>7;)
    w=w-7;
    if(w==5)my_printf("%d\n",5);
    w=w+31;
    for(;w>7;)
    w=w-7;
    if(w==5)my_printf("%d\n",6);
    w=w+30;
    for(;w>7;)
    w=w-7;
    if(w==5)my_printf("%d\n",7);
    w=w+31;
    for(;w>7;)
    w=w-7;
    if(w==5)my_printf("%d\n",8);
    w=w+31;
    for(;w>7;)
    w=w-7;
    if(w==5)my_printf("%d\n",9);
    w=w+30;
    for(;w>7;)
    w=w-7;
    if(w==5)my_printf("%d\n",10);
    w=w+31;
    for(;w>7;)
    w=w-7;
    if(w==5)my_printf("%d\n",11);
    w=w+30;
    for(;w>7;)
    w=w-7;
    if(w==5)my_printf("%d\n",12);
    return 0;
}