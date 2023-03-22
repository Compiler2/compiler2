#define NUM_ITER 20313

#include <header.h>

int main_bench()
{
int m,a,b,i,k;
my_scanf("%d",&m);
for(a=3;a<=m/2;a=a+2)
   {
    b=m-a;
    i=2;
    k=2;
       while(i<=a-1) 
       { 
         if(a%i==0) 
         break;
         else
          
            i=i+1;
        }
        while(k<=b-1) 
       { 
         if(b%k==0) 
         break;
         else
          {if(k==b-1&&i==a)
           my_printf("%d %d\n",a,b);}
             k=k+1;
       }
 
   }
}