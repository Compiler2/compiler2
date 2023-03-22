#include <header.h>

int main_bench()
{
char s[60],w[60];
my_scanf("%s%s",&s,&w);
int n=strlen(s),m=strlen(w);
for (int i=0;i+n<=m;i++)
    {
    for (int j=0;j<n;j++)
        if (s[j]!=w[i+j]) goto P;
    my_printf("%d",i);
    break;
    P:continue;
    }
}
