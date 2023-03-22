#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
int jtl,jyx,qtl,qyx;
double rate1,rate2 ;
my_scanf("%d%d",&jtl,&jyx);
rate1=jyx*1.0/jtl;
for(int i=1;i<n;i++){
my_scanf("%d%d",&qtl,&qyx);
rate2=qyx*1.0/qtl;
if(rate2-rate1>0.05)
my_printf("better\n");
else if(rate1-rate2>0.05)
my_printf("worse\n");
else
my_printf("same\n");
}
return 0;
}