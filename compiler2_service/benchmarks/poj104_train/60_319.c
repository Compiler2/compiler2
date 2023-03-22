#define NUM_ITER 8999

#include <header.h>

int ss(int n);

int main_bench()
{
    int n,i=0,a,b;
    my_scanf("%d",&n);
    if(n<5)
    my_printf("empty");
    else  
    {
        for(i=2;i<(n-1);i++)
        {
            a=ss(i);
            if(a==2)
            my_printf("%d %d\n",i,i+2);
        }      
    }
    return 0;
}

int ss(int n)
{
      int i=2,k=0,j=0;
      for(i=2;i<=(n/2);i++)
      {
          if((n%i)==0)
          {
              k++;
              break;
          }
      }
      if(k==0)
      j++;
      k=0;
      for(i=2;i<=(n+2/2);i++)
      {
          if(((n+2)%i)==0)
          {
              k++;
              break;
          }
      }
      if(k==0)
      j++;
      return j;    
}
