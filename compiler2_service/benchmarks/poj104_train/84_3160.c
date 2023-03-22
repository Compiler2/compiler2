#include <header.h>


int main_bench(){
int a,b,c,d,i;
my_scanf("%d",&a);
my_scanf("%d",&b);
my_scanf("%d",&c);
b=(b>c)?b:c;
c=(b<c)?b:c;
i=3;
while(i<=a){
my_scanf("%d",&d);
if(d>b){
c=b;
b=d;
}
if((d<b)&&(d>c)){
c=d;
}
i++;
}
my_printf("%d\n",b);
my_printf("%d",c);
return 0;
}
