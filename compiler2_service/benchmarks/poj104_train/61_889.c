#include <header.h>

int a(int n)
{
    int i=1,j=1,k,x=1;
    if(n==1||n==2)
    return(1);
    else
    {
        for(k=0;k<n-2;k++)
        {
                     x=i+j;
                     i=j;
                     j=x;     
        }
        return(x);
    }
}
main_bench()
{
      int n,i,j;
      my_scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      my_scanf("%d",&j);
                      my_printf("%d\n",a(j));
      }
      getchar();
      getchar();
}
