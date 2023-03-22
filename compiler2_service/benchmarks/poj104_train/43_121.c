#include <header.h>

int main_bench()
{
    int m,i,j;
    my_scanf("%d",&m);
    for(i=3;i<=m/2;i++)
    {
             for(j=1;j++;j<=i)
             {
                              if(i%j==0)
                              break;
             }         
             if(j==i)
             {
                     for(j=2;j++;j<=m-i)
                     {
                              if((m-i)%j==0)
                              break;
                     }
                     if(j==m-i)
                     my_printf("%d %d\n",i,m-i);
             }        
    }
    getchar();
    getchar();
}
