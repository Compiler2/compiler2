#define NUM_ITER 372747

#include <header.h>

long reverse(long n)
{
    long g = n;
    long a=0,b=0;
        while(g!=0)
    {         
             
              a = g % 10;
              b = b*10+a;  
              g = g/10;
    
    }
 
  
    return b;

}



main_bench()
{
 long n,b,i;     
for(i=0;i<=5;i++)
{      
 my_scanf("%d",&n);
 b = reverse(n);
 my_printf("%d\n",b);
}


}