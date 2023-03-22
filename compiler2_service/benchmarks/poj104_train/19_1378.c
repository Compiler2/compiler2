#include <header.h>


int main_bench()
{
    int i,k;
    char a[100][100],b[100],c[100];
    int n=0;
    for(i=0;i<100;i++)
    {
        my_scanf("%s",a[i]);
        n++;
        k=getchar();
        if(k=='\n')
            break;
    }
    my_scanf("%s",b);
    my_scanf("%s",c);
    for(i=0;i<n;i++)
    {
        k=strcmp(b,a[i]);
        if(k==0)
            strcpy(a[i],c);
    }
    for(i=0;i<n-1;i++)
    {
        my_printf("%s ",a[i]);
    }
    my_printf("%s",a[n-1]);
}
