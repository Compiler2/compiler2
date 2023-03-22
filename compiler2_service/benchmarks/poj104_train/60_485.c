#define NUM_ITER 2368

#include <header.h>

int main_bench()
{
    int i,j,k,m,n,p;
    k=0;p=0;
    my_scanf("%d",&n);
    for(i=3;i<n-1;i++)
    {
                      k=0;m=0;
                      for(j=2;j<i;j++)
                      {
                                      if(i%j==0)
                                      {
                                                k++;
                                                
                                      }
                                      if((i+2)%j==0)
                                      { 
                                                    m++;
                                                    
                                      }
                      }
                      
                      if((m==0)&&(k==0))
                      {
                                      p++;
                                      
                                      if(p==1)
                                      {
                                              my_printf("%d %d",i,i+2);
                                      }
                                      else
                                      {
                                          my_printf("\n%d %d",i,i+2);
                                      }
                      }
                      
    }
    if(p==0)
    {
            my_printf("empty");
    }
        return 0;
}