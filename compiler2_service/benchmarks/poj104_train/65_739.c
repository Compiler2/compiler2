#define NUM_ITER 34967

#include <header.h>


int main_bench(){
   int n,i;
   double jieguo=0.00;
   my_scanf("%d\n",&n);
   int a[n],b[n];
   for (i=0;i<n;i++){
       my_scanf("%d%d\n",&a[i],&b[i]);
       if (a[i]==b[i]-1||a[i]==b[i]+2){jieguo=jieguo+1;}
          else if (a[i]==b[i]){jieguo=jieguo;}
             else {jieguo=jieguo-1;}       
   }
   if (jieguo==0.00){my_printf("Tie");}
   else if(jieguo>0.00){my_printf("A");}
   else {my_printf("B");}
   return 0;
}