#include <header.h>

int main_bench()
{
int n, i1, m1, i2, m2, i3, m3;
my_scanf("%d", &n);
if(n<10){
my_printf("%d", n);
}
else
if(n>=10&&n<100){
i1=n%10;
m1=n/10;
my_printf("%d%d", i1, m1);
}
else
if(n>=100&&n<1000){
i1=n%10;m1=n/10;
i2=m1%10;m2=m1/10;
my_printf("%d%d%d", i1, i2, m2);
}
else
if(n>=1000&&n<9999){
i1=n%10;m1=n/10;
i2=m1%10;m2=m1/10;
i3=m2%10;m3=m2/10;
my_printf("%d%d%d%d", i1, i2, i3, m3);
}
else
my_printf("00001");
} 
