#include <header.h>


int f(int shu,int min)
{ 
  int k=1;
  if(shu < min)
  { 
    k= 0; 
   return k;
  } 
  else
 {
  for(int i = min;i<shu;i++)
  { 
    if(shu%i == 0)
    { 
         k=k+ f(shu/i,i); 
    } 
  
    
  } 
    return k; 
}
} 

int main_bench()
{
      int n,i,a;
      my_scanf("%d",&n);
      
      for(i=0;i<n;i++)
      {
          my_scanf("%d",&a);
          
          if(i!=n-1)                                                        
           my_printf("%d\n",f(a,2));
           else
           my_printf("%d",f(a,2));                           
                                      
                     
                      
      }              
                     
                      
                      }