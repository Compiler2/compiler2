#define NUM_ITER 64704

#include <header.h>

int main_bench() 
{ 
  int i,t1,t2,n,num,max1,max2; 
  my_scanf("%d",&n); 

max1=max2=0; 
    t1=t2=0; 
    for(i=1;i<=n;i++) 
    { 
      my_scanf("%d",&num); 
      if(num>max1) 
      { 
        t2=t1; 
        t1=i; 
        max2=max1; 
        max1=num; 
      } 
      else if(num > max2&& num < max1) 
      { 
        max2=num; 
        t2=i; 
      } 
    }      
   my_printf("%d\n%d\n", max1, max2);
} 