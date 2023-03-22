#define NUM_ITER 34385

#include <header.h>

int main_bench()
{
    int n,i,a,b,t=0,m=0;
    my_scanf("%d",&n);
    int sz[n];
    for(i=0;i<n;i++)
    {
        my_scanf("%d %d",&a,&b);
        if(a>89&&a<141&&b>59&&b<91)
        {
            sz[i]=0;
        }
        else{sz[i]=1;}
    }
    
    
    
    for(i=0;i<n;i++)
    {
        if(sz[i]==0) {t=t+1;}
      
        if(sz[i]==1) {t=0; }
        if(m<t){ m=t;}
    }
    my_printf("%d\n",m);
    return 0;
}




