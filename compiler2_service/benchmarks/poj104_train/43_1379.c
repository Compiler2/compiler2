#define NUM_ITER 5668

#include <header.h>



    int f(int n)
    {
        int j=0,m;
        
        
        
        
          for(int i=2;i<n;i++)
          {
                m=n%i;
                if(m==0)
                j=j+1;
                
          }
          if(j==0)
          return 1;
          else
          return 0;
        
    }
int main_bench()
{
    int n,h;
    my_scanf("%d",&n);
    for(int k=2;k<=n/2;k++)
    {
       h=n-k;
       if((f(h)==1)&&(f(k)==1))
       my_printf("%d %d\n",k,h);
    }
    getchar();
    getchar();
    
}     
                
