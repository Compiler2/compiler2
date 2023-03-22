#include <header.h>

int main_bench()
{
    char a[100],b[100];
    int i,j,k,m,n,flag;
    my_scanf("%s",a);
    my_scanf("%s",b);
    n=strlen(a);
    m=strlen(b);
    for(i=0;i<m;++i)
    {
        for(j=0;j<n && j+i<m;++j)
        {
            flag=1;
            if(a[j]!=b[i+j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            break;
    }
    my_printf("%d",i);
    return 0;
}
            
