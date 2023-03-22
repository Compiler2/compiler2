#define NUM_ITER 721460

#include <header.h>

 int invert(long m)
 {   my_printf("%ld", m%10);
     m = m/10;
     if (m>0)
         invert(m)  ;
 } 
main_bench()
 {
     long n;
     
     my_scanf("%ld", &n);
     invert(n);
     my_printf("\n");
 }
