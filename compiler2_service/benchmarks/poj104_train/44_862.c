#define NUM_ITER 441235

#include <header.h>

main_bench()
{
    int i,j[6],k[6];
    int reverse(int n);
    for(i=0;i<6;i++)
    {   my_scanf("%d",&j[i]);
        k[i]=reverse(j[i]);
        }
    for(i=0;i<6;i++)
        my_printf("%d\n",k[i]);


    }
    
     int reverse(int n)
     {      int N,i,j=0,revn=0;
            N=n;
            if(n<0)
            n=-n;
            for(;n!=0;)
            {   j=n%10;
                revn=revn*10+j;
                n=n/10;
                        }
            if(N<0)
            revn=-revn;
            return(revn);
            
            
       



            }