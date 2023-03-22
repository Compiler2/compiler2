#define NUM_ITER 1065847

#include <header.h>

int main_bench()
{
    char a[100],b[99];
    int x,y,l;
    my_scanf ("%s",a);
    l=strlen(a);
    if (l==1)
    {my_printf ("0\n");
    my_printf ("%c",a[0]);}
    else
    {for (int i=1;i<l;i++)
    {
        a[i]=a[i]-'0';
        a[i-1]=a[i-1]-'0';
        b[i-1]=(a[i]+a[i-1]*10)/13+'0';
        a[i]=(a[i]+a[i-1]*10)%13+'0';
    }
    b[l-1]=0;
    if (b[0]=='0' && b[1]!=0)
    {
                for (int j=0;j<l;j++)
                {
                    b[j]=b[j+1];
                }
    }
    a[l-1]=a[l-1]-'0';
    my_printf ("%s\n",b);
    my_printf ("%d",a[l-1]);
    }
    getchar();
    getchar();
    getchar();
}