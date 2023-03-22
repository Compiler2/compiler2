#include <header.h>

int main_bench()
{
    int N,b,e,h;
    int sz[1000];
    int a[1000];
    b=0;
    e=0;
    h=0;
    my_scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
            my_scanf("%d",&sz[i]);
            if(sz[i]%2!=0)
            {
                    a[b]=sz[i];
                    b++;
            }
    }
    for(int k=0;k<b;k++)
    {
            for(int g=0;g<b;g++)
            {
                    if(a[g]>a[g+1])
                    {
                                   h=a[g+1];
                                   a[g+1]=a[g];
                                   a[g]=h;
                    }
            }
     }
                    
    for(int x=1;x<=b;x++)
    {
            
            if(x<b)
            my_printf("%d,",a[x]);
            else
            my_printf("%d",a[x]);
            e++;
            
     }
return 0;
}