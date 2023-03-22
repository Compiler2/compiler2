#define NUM_ITER 1408

#include <header.h>

int p=0,q=2;
int jizu(int x)
{ 

  for(int i=q;i<=x-1;i++)
  { 
     if((x%i==0)&&(x/i>i))
      {
        p++;
        q=i;
        jizu(x/i);
        
      }
      else if((x%i==0)&&(x/i==i))
       {
         p++;  
       }
   }
  return p;    
}
int main_bench()
{
  int n;
  my_scanf("%d",&n);
  int a[100];
  for(int i=0;i<=n-1;i++)
   {
     my_scanf("%d",&a[i]);      
   }
  for(int i=0;i<=n-1;i++)
   {
    my_printf("%d\n",jizu(a[i])+1);
     p=0,q=2;      
   }  
 int y;
 my_scanf("%d",&y);    
    
}
