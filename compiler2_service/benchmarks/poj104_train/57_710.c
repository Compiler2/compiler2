#include <header.h>

int main_bench()
{
    int x;
    my_scanf("%d", &x);
    char string[100][100];
    int i,n[100];
    for(i=1;i<=x;i++)
    {
                     my_scanf("%s", string[i]);
                     n[i]=strlen(string[i]);
    }
    for(i=1;i<=x;i++)
    {
                     if(string[i][n[i]-1]=='r'||string[i][n[i]-1]=='y')
                     {
                        string[i][n[i]-2]='\0';
                     }
                     else
                     {string[i][n[i]-3]='\0';}
                     my_printf("%s\n", string[i]);
    }
    return 0;
}
