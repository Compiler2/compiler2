#include <header.h>

int main_bench()
{
    int l,i,j,c,d,e;
    int b[100];
    char a[100];
    my_scanf("%s",a);
    l=strlen(a);
    for (i=0;i<l;i++)
    {
        a[i]=a[i]-48;
    }
    if(l==1 || (l==2&&a[0]*10+a[1]<13))
    {
        d=0;
        if (l==2)
        e=a[0]*10+a[1];
        else
        e=a[0];
        my_printf ("%d\n",d);
        my_printf ("%d",e);
    }
   
    else
    {
    for (j=0,i=0;j<l-1 ;j++)
    { 
        b[j]=(a[i]*10+a[i+1])/13;
        a[i+1]=(a[i]*10+a[i+1])%13;
        c=a[i+1];
        i=i+1;
    }
    if (b[0]==0)
    {
        for (j=1;j<l-1;j++)
        my_printf ("%d",b[j]);
    }
    else
    {
        for (j=0;j<l-1;j++)
        my_printf ("%d",b[j]);
    }
    my_printf ("\n");
    my_printf ("%d",c);
    }
    getchar();getchar();getchar();
}
        
        
        
