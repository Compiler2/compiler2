#define NUM_ITER 2215

#include <header.h>

int main_bench()
{
    int i,j,k,m,n,p,q;
    my_scanf("%d",&n);
    m=0;
    for(i=2;i<=n-2;i++)
    {
        p=0;
        
        for(j=2;j<i/2;j++)
        {
            if(i%j==0)
            p++ ;  
        }
        q=0;
        for(k=2;k<=(i/2)+1;k++)
        {
            if((i+2)%k==0)
            q++;
        }
        if(p<1&&q<1)
        {
            my_printf("%d %d\n",i,i+2);
            m++;
        }    
    }
    if(m==0)
    my_printf("empty\n") ;
   
}