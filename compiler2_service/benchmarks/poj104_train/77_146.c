#include <header.h>

int main_bench()
{
    int i,j;
    char x,y;
    int a[100];
    char s[100];
    my_scanf("%s",s);
    j=0;
    for(i=0;i<100;i++)
        a[i]=-1;
    x=s[0];
    for(i=0;i<strlen(s);i++)
        if (s[i]==x)
        {
            a[j]=i;
            j++;
        }
        else
        {
            my_printf("%d %d\n",a[j-1],i);
            j--;
            a[j]=-1;
        }
    return 0;
}
