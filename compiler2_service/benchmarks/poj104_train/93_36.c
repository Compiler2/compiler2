#define NUM_ITER 1875326

#include <header.h>

int main_bench() 
{
int x,y,z,a;
my_scanf("%d",&a);
if (a%3==0) x=1;
else x=0;
if (a%5==0) y=1;
else y=0;
if (a%7==0) z=1;
else z=0;
if (x!=1 && y!=1 && z!=1) my_printf("n");
if (x==1 && y!=1 && z!=1) my_printf("3");
if (x!=1 && y==1 && z!=1) my_printf("5");
if (x!=1 && y!=1 && z==1) my_printf("7");
if (x==1 && y==1 && z!=1) my_printf("3 5");
if (x==1 && y!=1 && z==1) my_printf("3 7");
if (x!=1 && y==1 && z==1) my_printf("5 7");
if (x==1 && y==1 && z==1) my_printf("3 5 7");
}