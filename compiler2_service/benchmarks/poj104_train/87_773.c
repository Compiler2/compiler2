#define NUM_ITER 13756

#include <header.h>

int main_bench(){
   int a,b,c,d,e,f,s,i=1;
   while(i){
   my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
   i=a;
   if(i==0){
   break;}
   s=f-c+(e-b)*60+(d-a+12)*3600;
my_printf("%d\n",s);
}
return 0;
}


