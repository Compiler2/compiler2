#define NUM_ITER 1809252

#include <header.h>

int main_bench()
{
   int n;
   my_scanf("%d",&n);
   if(n>=100){
   my_printf("%d\n",n/100);
   n=n-100*(n/100);
   }else{my_printf("0\n");}
      if(n>=50){
   my_printf("%d\n",n/50);
   n=n-50*(n/50);
   }else{my_printf("0\n");}
      if(n>=20){
   my_printf("%d\n",n/20);
   n=n-20*(n/20);
   }else{my_printf("0\n");}
      if(n>=10){
   my_printf("%d\n",n/10);
   n=n-10*(n/10);
   }else{my_printf("0\n");}
      if(n>=5){
   my_printf("%d\n",n/5);
   n=n-5*(n/5);
   }else{my_printf("0\n");}
      if(n>=1){
   my_printf("%d\n",n);
   n=n-1*(n/1);
   }else{my_printf("0\n");}
   return 0;
}