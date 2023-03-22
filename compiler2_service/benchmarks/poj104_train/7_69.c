#define NUM_ITER 845537

#include <header.h>

int main_bench()
{
    char a[1000],b[100],c[100];
    int lenb,lena,len;
    int i=0,j,k,flag;
    gets(c);
    my_scanf("%s",a);
    my_scanf("%s",b);
    len=strlen(c);
    lena=strlen(a);
    lenb=strlen(b);
    for(i=0;i<len;++i)
        if(c[i]==a[0])
        {
            flag=1;
            for(j=0;j<lena && i+j<len;++j)
                if(a[j]!=c[i+j])
                {
                    flag=0;
                    break;
                }
            if(flag)
            {
                my_printf("%s",b);
                i+=lena;
                break;
            }
            else
                my_printf("%c",c[i]);
        }
        else
            my_printf("%c",c[i]);
    my_printf("%s",c+i);
    return 0;
}
