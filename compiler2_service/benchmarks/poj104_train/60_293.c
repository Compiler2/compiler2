#define NUM_ITER 18120

#include <header.h>

int main_bench()
{
    int n,i,j,h,k;
    my_scanf("%d",&n);
    i=0;
    j=3;
    
    while(j<=n-2)
    {
                 k=0;
                 for(h=2;h<=j-1;h++)
                 {
                       if(j%h==0||(j+2)%h==0)
                       break;
                       if((j+2)%j==0||(j+2)%(j+1)==0)
                       break;
                       
                       k++;
                 }
                                  if(k==j-2)
                                  {my_printf("%d %d\n",j,j+2);
                                  i++;
                                  }
                                  j++;
       }
    if(i==0)
    my_printf("empty");
    
    
     getchar();
     getchar();
}
    