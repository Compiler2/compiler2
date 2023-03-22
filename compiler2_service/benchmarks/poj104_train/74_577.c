#define NUM_ITER 1207073

#include <header.h>

int hui(int n);
int sushu(int n);
int main_bench()
{
    int m,n,i;
    int first=1,flag=1;
    my_scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
         if(hui(i)&&sushu(i))
         {
              if(first)
              {
                  my_printf("%d",i);
                  first=0;
               }
               else
               my_printf(",%d",i);
               flag=0;
         }
    }
    if(flag)
    my_printf("no");
    return 0;
}
int hui(int n)
{
    int temp,s=0;
    temp=n;
    while(n!=0)
    {
               s*=10;
               s+=n%10;
               n/=10;
    }
    if(s==temp)
    return 1;
    else 
    return 0;
}
int sushu(int n)
{
    int i;
    for(i=2;i<n;i++)
    
           if(n%i==0)
           return 0;
         return 1;
    
}                 
    
                 
