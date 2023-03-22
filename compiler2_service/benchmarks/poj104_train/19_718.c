#define NUM_ITER 782329

#include <header.h>

int main_bench()
{
    char a[1000],b[100],c[100],t[100];
    int lenb,lena,len;
    int i=0,j,k,flag;
    gets(c);
    my_scanf("%s",a);
    my_scanf("%s",b);
    len=strlen(c);
    lena=strlen(a);
    lenb=strlen(b);
    while(i<len)
    {
        j=0;
        while(isgraph(c[i]))
            t[j++]=c[i++];
        t[j]='\0';
        if(strcmp(t,a))
            my_printf("%s",t);
        else
            my_printf("%s",b);
        if(c[i])
            my_printf("%c",c[i++]);
    }
    return 0;
}
