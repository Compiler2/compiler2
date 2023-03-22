#define NUM_ITER 1267937

#include <header.h>

int main_bench()
{
    char a[1000];
    gets(a);
    char t;
    int i,l,count;
    l=strlen(a);
    for(i=0;i<l;i++)
        if(a[i]>='a'&&a[i]<='z')
            a[i]=a[i]-'a'+'A';
    t=a[0];
    count=1;
    for(i=1;i<l;i++)
    {
        if(a[i]==t)
            count++;
        else
        {
            my_printf("(%c,%d)",t,count);
            t=a[i];
            count=1;
        }
    }
    t=a[l-1];
    my_printf("(%c,%d)\n",t,count);
}