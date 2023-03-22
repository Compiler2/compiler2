#define NUM_ITER 19528

#include <header.h>

int main_bench()
{
    int n,a[999],i,k[27]={0},j,t,m;
    char b[999][27];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d %s",&a[i],b[i]);
        for(j=0;b[i][j];j++)
        k[b[i][j]-65]++;
    }
    t=k[0];m=0;
    for(j=0;j<26;j++)
    {
        if(k[j]>t) {t=k[j];m=j;}
    }
    my_printf("%c\n%d\n",m+65,t);
    for(i=0;i<n;i++)
    {
        for(j=0;b[i][j];j++)
        {
            if(b[i][j]==m+65)
            {
                my_printf("%d\n",a[i]);
                break;
            }
        }
    }
    return 0;
}
