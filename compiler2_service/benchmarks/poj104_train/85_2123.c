#include <header.h>

int s(char n)
{
    if(('a'<=n&&n<='z')||('A'<=n&&n<='Z')||n=='_')
        return 1;
    else return 0;
}
int f(char n)
{
    if(('a'<=n&&n<='z')||('A'<=n&&n<='Z')||n=='_'||('0'<=n&&n<='9'))
        return 1;
    else return 0;
}
int main_bench()
{
    int i,j,n,fl;
    char w[30];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int fl=1;
        my_scanf("%s",w);
        if(!s(w[0]))fl=0;
        for(j=1;j<strlen(w);j++)if(!f(w[j]))fl=0;
        fl?my_printf("yes\n"):my_printf("no\n");
    }
        return 0;
}