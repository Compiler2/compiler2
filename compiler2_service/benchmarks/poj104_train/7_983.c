#include <header.h>

main_bench()
{
    int i,j,k,l1,l2,l3,sum;
    char a[100],b[100],c[100];
    my_scanf("%s",a);
    my_scanf("%s",b);
    my_scanf("%s",c);
    sum=0;
    l1=strlen(b);
    l2=strlen(c);
    l3=strlen(a);
    for(i=0;i<l3;i++)
    {
        for(j=i,k=0;k<l1;k++)
        {
            if(a[j]!=b[k])
            break;
            j++;
        }
        if(k==l1&&sum==0)
        {
        for(j=0;c[j]!='\0';j++)
        my_printf("%c",c[j]);
        i=i+l1-1;
        sum=sum+1;
        }
        else
        my_printf("%c",a[i]);
    }
}