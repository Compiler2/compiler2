#include <header.h>

int f(int x,int y)
{
    int k=0,i;
    for(i=2;i<=x;i++)
    {
        k=(k+y)%i;
    }
    return k+1;
}
main_bench()
{
      int n[20],m[20],i,king;
      for(i=0;i<=19;i++)
      {
           my_scanf("%d %d",&n[i],&m[i]);
           king=f(n[i],m[i]);
           if(n[i]!=0)
              my_printf("%d\n",king);
           else
              break;
      }
}
    

    
