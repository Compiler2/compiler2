#include <header.h>

main_bench()
{
    int *p,a[5][5],m,n,i,q;
    p=a[0];
    for(i=0;i<=24;i++)
    my_scanf("%d",p+i);
    my_scanf("%d %d",&m,&n);
    if(m<=4&&m>=0&&n>=0&&n<=4&&m>n)
    {for(i=0;i<n;i++)
    for(q=0;q<=4;q++)
    {my_printf("%d",*(a[i]+q));
    if(q==4) my_printf("\n");
    else my_printf(" ");}
    for(q=0;q<=4;q++)
    {my_printf("%d",*(a[m]+q));
    if(q==4) my_printf("\n");
    else my_printf(" ");}
    for(i=n+1;i<m;i++)
    for(q=0;q<=4;q++)
    {my_printf("%d",*(a[i]+q));
    if(q==4) my_printf("\n");
    else my_printf(" ");}
    for(q=0;q<=4;q++)
    {my_printf("%d",*(a[n]+q));
    if(q==4) my_printf("\n");
    else my_printf(" ");}
    for(i=m+1;i<=4;i++)
    for(q=0;q<=4;q++)
    {my_printf("%d",*(a[i]+q));
    if(q==4) my_printf("\n");
    else my_printf(" ");}
    }
    if(m<=4&&m>=0&&n>=0&&n<=4&&n>m)
    {for(i=0;i<m;i++)
    for(q=0;q<=4;q++)
    {my_printf("%d",*(a[i]+q));
    if(q==4) my_printf("\n");
    else my_printf(" ");}
    for(q=0;q<=4;q++)
    {my_printf("%d",*(a[n]+q));
    if(q==4) my_printf("\n");
    else my_printf(" ");}
    for(i=m+1;i<n;i++)
    for(q=0;q<=4;q++)
    {my_printf("%d",*(a[i]+q));
    if(q==4) my_printf("\n");
    else my_printf(" ");}
    for(q=0;q<=4;q++)
    {my_printf("%d",*(a[m]+q));
    if(q==4) my_printf("\n");
    else my_printf(" ");}
    for(i=n+1;i<=4;i++)
    for(q=0;q<=4;q++)
    {my_printf("%d",*(a[i]+q));
    if(q==4) my_printf("\n");
    else my_printf(" ");}
    }
    else my_printf("error");
}