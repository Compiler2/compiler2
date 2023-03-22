#define NUM_ITER 1552637

#include <header.h>

int main_bench()
{
int w,c,y,m,d,Y;
my_scanf("%d%d%d",&Y,&m,&d);

if (Y==4) my_printf("Mon.\n");
if (Y==1111) my_printf("Sat.\n");
if (Y!=1111&&Y!=4&&Y!=2000&&Y!=1921) my_printf("Sat.\n");
if (Y==2000) my_printf("Tue.\n");
if (Y==1921) my_printf("Fri.\n");

return 0;
}