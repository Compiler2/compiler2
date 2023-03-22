#include <header.h>

int main_bench()
{
    char s[256],sub[206],re[256];
    int i,j,n,m;
    my_scanf("%s",s);
    my_scanf("%s",sub);
    my_scanf("%s",re);
    n=strlen(sub);
    m=strlen(s);
    for (i=0;i<m-n+1;i++)
    {
        if (s[i]==sub[0])
        for(j=0;j<n;j++)
        {
            if (s[i+j]!=sub[j])
            break;
        }
        if (j==n)
        {
            for (j=0;j<i;j++)
            my_printf("%c",s[j]);
            my_printf("%s",re);
            for (j=i+n;j<m;j++)
            my_printf("%c",s[j]);
            break;
        }
    }
    if(i==(1+m-n))
    my_printf("%s",s);
}
