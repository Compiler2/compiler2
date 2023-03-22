#define NUM_ITER 856787

#include <header.h>


int main_bench()
{
    double n;
    char a[500];
    char b[500];
    
    my_scanf("%lf",&n);
    my_scanf("%s",a);
    my_scanf("%s",b);
    
    int i,x;
    x=0;
    
    double w,k,j,l;
    
    k=strlen(a);
    l=strlen(b);
    
    if(k==l)
    {
        for(i=0;i<k;i++)
        {
            if(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G') x=1;
            else 
            {
                x=0;
                break;
            }
            if(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G') x=1;
            else 
            {
                x=0;
                break;
            }
        }
        if(x==1)
        {
     w=0;
    
    for(i=0;i<k;i++)
    {
        if(a[i]==b[i]) w=w+1;
    }
    
    
    
    j=w/k;
    
    if(j<=n) my_printf("no");
    else my_printf("yes");
        }
        else my_printf("error");
    }
    
    else my_printf("error");
    
    return 0;
}

