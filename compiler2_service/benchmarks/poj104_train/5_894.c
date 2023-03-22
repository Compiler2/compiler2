#include <header.h>

int main_bench()
{
    int i,j=0,h=1,la,lb;
    double s,r;
    char a[1000],b[1000];
    my_scanf ("%lf",&s);
    my_scanf ("%s\n%s",a,b);
    la=strlen(a);
    lb=strlen(b);
    if (la!=lb)
    {
        my_printf ("error");
    }
    else 
    {
        for (i=0;a[i]!='\0';i++)
        { 
            if (((a[i]!='A')&&(a[i]!='G')&&(a[i]!='C')&&(a[i]!='T'))||((b[i]!='A')&&(b[i]!='G')&&(b[i]!='C')&&(b[i]!='T')))
            {
                my_printf ("error");
                h=0;
                break;
            }             
        }
        if (h==1)
        {
            for (i=0;a[i]!='\0';i++)
            {
                if (a[i]==b[i])
                {
                    j++;
                }
            }
            r=(double)j/(double)la;
            if (r>=s)
            { my_printf ("yes"); }
            else 
            { my_printf ("no"); }
        }
    }
    
    return 0;
}

