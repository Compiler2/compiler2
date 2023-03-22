#include <header.h>

int main_bench()
{
    int i,j,d,l,h;
    double n,t;
    char a[500],b[500];
    my_scanf("%lf\n",&n);
    d=0;
    gets(a);
    gets(b);
    l=strlen(a);
    h=strlen(b);
    if(l>h||l<n)
    {
        my_printf("error");
    }else if(l==h)
    {
        for(i=0,j=0;a[i]!='\0';i++,j++)
        {
            if(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')
            {
                 if(a[i]==b[j])
                 {
                     d++;
                 }
            }else{
                my_printf("error");
                return 0;
            }
        }
        t=(double)d/l;
        if(t>n)
        {
            my_printf("yes");
        }else if(t<=n)
        {
            my_printf("no");
        }
    }
    return 0;
}

