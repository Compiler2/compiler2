#define NUM_ITER 828565

#include <header.h>

int main_bench()
{
    char a[100],b[100],cha;
    int i,j,m,n;
    my_scanf("%s%s",a,b);
    m=strlen(a);
    n=strlen(b);
    if(m!=n)
    my_printf("NO\n");
    else
    {
        for(i=1;i<m;i++)
        for(j=0;j<m-i;j++)
        {
            if(a[j]>a[j+1])
            {
                cha=a[j];
                a[j]=a[j+1];
                a[j+1]=cha;
            }
        }
        for(i=1;i<n;i++)
        for(j=0;j<n-i;j++)
        {
            if(b[j]>b[j+1])
            {
                cha=b[j];
                b[j]=b[j+1];
                b[j+1]=cha;
            }
        }
        if(strcmp(a,b)!=0)
        my_printf("NO\n");
        else 
        my_printf("YES\n");
    }
    
    return 0; 
}
