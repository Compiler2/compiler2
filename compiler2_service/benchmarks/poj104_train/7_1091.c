#define NUM_ITER 424802

#include <header.h>

int main_bench()
{
    char b[256],a[256],c[256];
    int m,n,i,j,d;
    my_scanf("%s",a);
    my_scanf("%s",b);
    my_scanf("%s",c);
    m=strlen(a);
    n=strlen(b);
    for(i=0;i<m;i++)
    {
                    d=1;
                    for(j=0;j<n;j++)
                    {
                                    if(b[j]!=a[j+i])
                                    d=0;
                                    }
                    if(d==1)
                  {  for(j=0;j<n;j++)
                    {a[i+j]=c[j];
                                    }
                                    break;}
                    
                    }
                  
   my_printf("%s",a);
    
                      getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar();
                          getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar();
                              getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar();
}