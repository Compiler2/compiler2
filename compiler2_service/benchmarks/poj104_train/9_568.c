#include <header.h>

int main_bench()
{
    int n,j,i;
    my_scanf("%d",&n);
    char a[n][10];
    int b[n];
    for(j=0;j<n;j++)
    my_scanf("%s %d",a[j],&b[j]);
    for(i=100;i>=60;i--) 
    {
                         for(j=0;j<n;j++)
                         {if(b[j]==i)
                         my_printf("%s\n",a[j]);
                         }
     }
     
     for(j=0;j<n;j++)
     {
                     if(b[j]<60)
                     my_printf("%s\n",a[j]);
      }
    
    
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    

}