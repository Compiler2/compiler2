#define NUM_ITER 721400

#include <header.h>

int cmp(char s[],int x,int y,int n)
{
    int i;
    for(i=0;i<n;i++)
        if(s[x+i]!=s[y+i]) return 0;
    return 1;
}
int main_bench()
{
    char s[600];
    int n,l,a[600]={0},b[600]={0},i,j,k=0,t;
    my_scanf("%d\n",&n);
    gets(s);
    l=strlen(s);
    for(i=0;i<l+1-n;i++)
    {
        t=1;
        for(j=0;j<k;j++)
            if(cmp(s,i,b[j],n))
            {
                a[j]++;
                t=0;
            }
        if(t) b[k++]=i;
    }
    t=0;
    for(i=0;i<k;i++)
        if(a[i]>t) t=a[i];
    if(t)
    {
    my_printf("%d\n",t+1);
    for(i=0;i<k;i++)
        if(a[i]==t)
        {
            for(j=b[i];j<b[i]+n;j++)
                my_printf("%c",s[j]);
            my_printf("\n");
        }
    }
    else my_printf("NO\n");
}