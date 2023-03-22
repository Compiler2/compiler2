#include <header.h>

int main_bench()
{
    int m;
    my_scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
         int n;
         my_scanf("%d",&n);
         float s=0;
         int x=2,y=1,t;
         for(int j=1;j<=n;j++)
         {
              s=s+(float)x/y;
              t=x+y;
              y=x;
              x=t;
         }
         my_printf("%.3f\n",s);   
            
    }
    
    getchar();
    getchar();
}
