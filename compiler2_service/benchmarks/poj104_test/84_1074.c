#include <header.h>

int main_bench()
{
int n,a,b,c,t;
my_scanf("%d",&n);
t=1;
b=0;
c=0;
while(t<=n){
            my_scanf("%d",&a);
            if(a>=b){
                     c=b;
                     b=a;
                     t=t+1;
                     }
            else if((a<b)&&(a>=c)){
                 c=a;
                 t=t+1;
                 }
            else{
                 t=t+1;
                 }
                     
            }
            my_printf("%d\n%d",b,c);
            my_scanf("%d",&n);
            return 0;
            }
            
            