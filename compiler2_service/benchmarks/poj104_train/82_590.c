#define NUM_ITER 36589

#include <header.h>


int main_bench()
{
  int n, sys, dia, i, normal=0, max=0;
  
  my_scanf ("%d",&n);
   
  for (i=1;i<=n;i++){
      my_scanf ("%d %d",&sys,&dia);
      if (sys>=90 && sys<=140 && dia>=60 && dia<=90)
         normal++; 
      else
         normal = 0;
       
      if (max<normal)
         max = normal;
      
      }
  
  my_printf ("%d",max);
  
  return 0;
}