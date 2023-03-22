#define NUM_ITER 3719

#include <header.h>

int f(int n)
{
    int i=2,k=0;
    for(i=2;i<n;i++)
    {  
      if(n%i==0)
      {
      k++;
      }
      }
      if(k==0)
      return (0);
      else
      return (1);
    
}      
int main_bench()
{
    int n,i,sum=0,t;
    my_scanf("%d",&n);
    if(n<5)
    my_printf("empty\n");
    else 
    {
    for(i=5;i<=n;i++)
    {
         t=i-2; 
      if(f(i)==0&&f(t)==0)
      {
         
         my_printf("%d %d\n",t,i);
         sum++; 
      }
    }
    
    if(sum==0)
    my_printf("empty\n");
    }
    getchar();
    getchar();
}
