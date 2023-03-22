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
    strcpy(b,a[0]);
    for(i=0;i<n;i++)
    {
        if(strlen(b)>strlen(a[i]))
            strcpy(b,a[i]);
    }
    strcpy(c,a[0]);
    for(i=0;i<n;i++)
    {
        if(strlen(c)<strlen(a[i]))
            strcpy(c,a[i]);
    }
    my_printf("%s\n",c);
    my_printf("%s\n",b);
}