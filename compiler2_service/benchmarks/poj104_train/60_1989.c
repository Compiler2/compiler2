#define NUM_ITER 3635

#include <header.h>



main_bench()
{
 int i, j, k, n, s, flag=9;
 my_scanf("%d", &n);
 s=0;
 
 for (i=2; i<n-1; i++)
 {
  flag=0;   
  for (j=2; j<=i/2; j++)
  {
   if (i%j==0)
      flag++;    
  }  
  if (flag==0)    
  {
   for (j=2; j<=(i+2)/2; j++)
   {
    if ((i+2)%j==0)
       flag ++;   
   }        
   if (flag==0)
   {   
    my_printf("%d %d\n", i, i+2);
    s++;
   } 
  }
 }
 if (s==0)
      my_printf("empty\n");

}