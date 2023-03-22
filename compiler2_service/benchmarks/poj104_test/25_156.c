#include <header.h>

int main_bench()
{
int i,a;
double d;
my_scanf("%d",&a);
d=1;
if(a==0){
d=1;
}
if(a!=0){
for(i=1;i<=a;i++){
d=d*2;
}
}
my_printf("%.0lf",d);
}