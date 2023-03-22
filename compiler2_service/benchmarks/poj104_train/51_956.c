#include <header.h>


void copy(char *s,char *c,int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        *s=*c;
        s++;
        c++;
    }
}

int main_bench()
{
    char str[500]={'\0'},s[500][10]={'\0'};
    char *p=str,*q;
    int n,i,j,max=0;
    int a[500]={0};
    my_scanf("%d\n",&n);
    gets(str);
    for (i=0; *(p)!='\0'; p++,i++)
        copy(s[i], p, n );
    n=i;
    for (i=j=0; i<n; i++)
        for (j=i; j<n; j++)
            if (strcmp(s[i], s[j])==0)
                a[i]++;
    for (i=0; i<n; i++)
        max=(max<a[i])?a[i]:max;
    if(max==1)my_printf("NO");
    else
    {
        my_printf("%d\n",max);
        for (i=0; i<n; i++)
            if(max==a[i])
                my_printf("%s\n",s[i]);
    }
}

