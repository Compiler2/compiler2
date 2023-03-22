#define NUM_ITER 1173589

#include <header.h>

int n,l,i,j,f[1000],tm,tn,tt;
char c[1000];
int st(int s,int t)
{
    int k;
    for(k=0;k<n;k++)
       if(c[s+k]!=c[t+k])
                   return 0;
    return 1;
}

int main_bench()
{
    my_scanf("%d%s",&n,c);
    l=strlen(c);
    for(i=l-n;i>=0;i--)
    {
        for(tt=0,j=i;j<=l-n;j++)
            if(st(i,j))
                tt++;
        if(tt>tm)f[0]=1,f[1]=i,tm=tt;
        else if(tt==tm)f[++f[0]]=i;
    }
    if(tm>1)
    {    my_printf("%d\n",tm);
    for(i=f[0];i;i--,my_printf("\n"))
        for(j=0;j<n;j++)
            my_printf("%c",c[f[i]+j]);
    }
    else
        my_printf("NO");
    return 0;
}
