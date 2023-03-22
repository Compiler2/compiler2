#define NUM_ITER 56774

#include <header.h>

int main_bench(){
int i,n,u18,u35,u60,up60;
u18=0;
u35=0;
u60=0;
up60=0;
double un18,un35,un60,upper60;
i=1;
my_scanf("%d",&n);
while(i<=n){
int x;
my_scanf("%d",&x);
if(x<=18){
u18++;
i++;}
else if(x>18&&x<=35){
u35++;
i++;}
else if(x>35&&x<=60){
u60++;
i++;}
else if(x>60){
up60++;
i++;}
else{
u35++;
i++;}
}
un18=100.0*u18/n;
un35=100.0*u35/n;
un60=100.0*u60/n;
upper60=100.0*up60/n;
my_printf("1-18: %.2lf%%\n",un18);
my_printf("19-35: %.2lf%%\n",un35);
my_printf("36-60: %.2lf%%\n",un60);
my_printf("60??: %.2lf%%\n",upper60);

return 0;
}
