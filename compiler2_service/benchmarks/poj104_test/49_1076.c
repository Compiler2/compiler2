#include <header.h>

int main_bench()
{
    char s[500];
    int n,i,j=2,k,m;
    my_scanf("%s",s);
    n=strlen(s);
    for(;j<=n;j++)
    {
        if(j%2) m=(j+1)/2;
        else m=j/2;
        for(k=0;k<=n-j;k++)
        {
            for(i=k;i<=m+k-1;i++)
            {
                if(s[i]!=s[j+2*k-1-i]) break;
            }
            if(i==m+k)
            {
                for(i=k;i<=j+k-1;i++) my_printf("%c",s[i]);
                my_printf("\n");
            }
        }
    }
}