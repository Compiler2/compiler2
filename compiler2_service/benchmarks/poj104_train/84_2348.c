#include <header.h>

int main_bench() 
{
 int a,b,c,n,i,x;
 my_scanf("%d",&i);
 my_scanf("%d",&x);
 a=x;
 my_scanf("%d",&x);
 b=x;
 if(a<b){
        c=b;
        b=a;
        a=c;
        }
for(n=1;n<=(i-2);n++){
	my_scanf("%d",&x);
       if(x>=a){
       b=a;
       a=x;
       }else{
          if(x>b){
          b=x;
          }
       }
     }
 my_printf("%d\n",a);
 my_printf("%d",b);
 return 0 ;
}
