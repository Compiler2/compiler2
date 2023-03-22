#define NUM_ITER 15901

#include <header.h>

main_bench()
{
      int i,j,n;
      my_scanf("%d",&n); 
      i=1;
      j=0; 
      while(i<=n)
      {
                 if(isprime(i)==1&&isprime(i+2)==1&&i+2<=n)
                 {my_printf("%d %d\n",i,i+2);
                 j++;} 
                 i=i+2;
                 } 
      if(j==0)
      my_printf("empty"); 
        
        } 
int isprime(int a)
{
    int j=2;
    while(j<a&&a%j!=0)
    {
               j++;
               }
               if (j==a)
               return 1;
               else 
               return 0;
               } 
     
