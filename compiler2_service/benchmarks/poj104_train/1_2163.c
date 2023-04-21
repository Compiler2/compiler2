#define NUM_ITER 2652

#include <header.h>



int f(int a,int min)
{ 
  if(a < min)
  { 
    return 0; 
  } 
  
  int r= 1; 
  for(int i = min;i<a;i++)
  { 
    if(a%i == 0)
    { 
         r+= f(a/i,i); 
    } 
  } 
  
    return r; 
} 

int main_bench()
{
      int n,a,i,j=0,k,m=0,r=0;
      my_scanf("%d",&n);
      
      for(k=0;k<n;k++)
      {
          my_scanf("%d",&a);
          
          if(k!=n-1)                                                               
           my_printf("%d\n",f(a,2));
           else
           my_printf("%d",f(a,2));                           
                                      
                     
                      
      }              
                     
                      
                      }