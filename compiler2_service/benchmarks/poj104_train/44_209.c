#define NUM_ITER 407257

#include <header.h>


int f(int n)   
{ 
  int x,y=0;
  if(n>=0) 
   {
            while(n!=0)
           {
              x=n%10;
              y=y*10+x;
              n=n/10;
            }
           return y;
   }
     else
       { 
         n=-n;
         while(n!=0)
          {
             x=n%10;
             y=y*10+x;
             n=n/10;
           }
         return -y;
         }
   
}  
  int main_bench()
{
    int a[6];  
    for(int i=0;i<6;i++)
    my_scanf("%d",&a[i]);
    for(int i=0;i<6;i++)
    my_printf("%d\n",f(a[i]));
    
    getchar();
    getchar();
}