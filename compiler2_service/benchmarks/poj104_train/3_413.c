#include <header.h>

int main_bench()
{
    int n,m,i,j,x=0;
    int w[1000];
    my_scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
     {
              my_scanf("%d",&w[i]);    
     }
    for(i=0;i<n-1;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    if(m==w[i]+w[j])
                                    {
                                                    x+=1;
                                                    break;
                                    }
                    }
                    if(x>0)
                    {
                           break;
                    }
    }
    
    if(x>0)
    {
           
            my_printf("yes");
    }
    else
    {
            my_printf("no");
    }
    
    return 0;
}
    