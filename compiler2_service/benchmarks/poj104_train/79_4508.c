#define NUM_ITER 1692205

#include <header.h>

main_bench()
 { 
   int n, m, i, s;          
   while (my_scanf ("%d %d",&n,&m)&&n!=0&&m!=0)
   {
	s=0;     
   	for (i=2; i<=n; i++) 
   	s=(s+m)%i;    
   	my_printf ("%d\n", s+1);	
   } 
 }