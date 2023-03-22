#include <header.h>


int f(int m,int n)
{
    int a;
    if(n==1) a=1;
    else a=(f(m,n-1)+m)%n;
    if(a==0) a=n;
  
    return a;
}
    
int main_bench()
{
    int i,m,n;
    for(i=1;;i++)
    {
          my_scanf("%d %d",&n,&m);
          if(m!=0) my_printf("%d\n",f(m,n));
          else     break;
    }
 
}
