#define NUM_ITER 1044706

#include <header.h>

int main_bench()
{
    char s[51],w[51];
    my_scanf("%s%s",s,w);
    int m,n,t;
    m=strlen(s);
    n=strlen(w);
    for(int i=0;i<n-m+1;i++)
    {
        t=0;
        for(int j=0;j<m;j++)
        {
            if(s[j]!=w[i+j]) {t=1;break;}
        }
        if(t==0) {my_printf("%d\n",i);break;}
    }
}