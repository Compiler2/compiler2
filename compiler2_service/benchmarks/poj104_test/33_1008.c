#define NUM_ITER 22013

#include <header.h>

int main_bench()
{
    char s[1000][1000],p[1000][1000];
    int n,i,j,m[1000];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%s",s[i]);
        m[i]=strlen(s[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m[i];j++)
        {
            if(s[i][j]=='A')
            {
                p[i][j]='T';
            }
            if(s[i][j]=='T')
            {
                p[i][j]='A';
            }
            if(s[i][j]=='C')
            {
                p[i][j]='G';
            }
            if(s[i][j]=='G')
            {
                p[i][j]='C';
            }
            p[i][m[i]]='\0';
        }
    }
    for(i=0;i<n;i++)
    {
        my_printf("%s\n",p[i]);
    }
    return 0;
}
