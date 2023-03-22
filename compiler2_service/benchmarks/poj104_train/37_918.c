#include <header.h>

void pr(char *a)
{
    int l,i,j,num[26];
    for(i=0;i<26;i++)
    {
        num[i]=0;
    }
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        num[a[i]-'a']+=1;
    }
    for(i=0,j=0;i<26;i++)
    {
        if(num[i]!=1)j++;
        if(j==26)my_printf("no\n");
    }
    if(j!=26)
    {
        for(i=0;i<l;i++)
        {
            if(num[a[i]-'a']==1)
            {
                my_printf("%c\n",a[i]);
                break;
            }
        }
    }
}
main_bench()
{
    int t,i;
    char a[100000];
    my_scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        my_scanf("%s",a);
        pr(a);
    }
}
