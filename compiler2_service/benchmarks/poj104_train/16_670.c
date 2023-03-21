#include <header.h>

 int invert(long m)
 {   printf("%ld", m%10);
     m = m/10;
     if (m>0)
         invert(m)  ;
 } 
main_bench()
 {
     long n;
     
     scanf("%ld", &n);
     invert(n);
     printf("\n");
 }
