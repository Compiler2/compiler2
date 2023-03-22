#include <header.h>

int main_bench()
{
    int i;
    char s[201]={0};
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i-1]==' '&&(i-1>0)&&s[i]==' ')   continue;
        else my_printf("%c",s[i]);
}
    return 0;
}