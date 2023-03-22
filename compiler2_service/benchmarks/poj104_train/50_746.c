#define NUM_ITER 53438

#include <header.h>

int main_bench(){
int i,w;
my_scanf("%d",&w);
int a[365];
for(i=0;i<365;i++,w++){
    a[i]=w%7;}
if(a[12]==5)my_printf("1\n");
if(a[43]==5)my_printf("2\n");
if(a[71]==5)my_printf("3\n");
if(a[102]==5)my_printf("4\n");
if(a[132]==5)my_printf("5\n");
if(a[163]==5)my_printf("6\n");
if(a[193]==5)my_printf("7\n");
if(a[224]==5)my_printf("8\n");
if(a[255]==5)my_printf("9\n");
if(a[285]==5)my_printf("10\n");
if(a[316]==5)my_printf("11\n");
if(a[346]==5)my_printf("12\n");

return 0;
}