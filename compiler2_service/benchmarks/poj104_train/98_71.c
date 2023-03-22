#include <header.h>

int main_bench()
{
    int n,i,j,l,k;
    char s[100];
    my_scanf("%d",&n);
    k=0;
    for(i=1;i<=n;i++)
    {
        my_scanf("%s",s);
        l=strlen(s);
        if (k==0)
        {
            my_printf("%s",s);
            k=l;
            continue;
        }
        if (k+l<80)
        {
            my_printf(" %s",s);
            k=k+l+1;
            continue;
        }
        if (k+l>=80)
        {
            my_printf("\n%s",s);
            k=l;
            continue;
        }
    }    
    return 0;
}