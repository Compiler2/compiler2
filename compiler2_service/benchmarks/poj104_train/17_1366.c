#include <header.h>


int main_bench()
{
    char c[101];
    int len,a[101];
    int i,j;
    while(gets(c)!=0)
    {
        len=strlen(c);
        for (i=0;i<len;i++)
        {
            if (c[i]=='(') a[i]=1;
            else if (c[i]==')')
            {
                for (j=i-1;j>=0;j--)
                {
                    if (a[j]==1) {a[j]=0;a[i]=0;break;}
                }
                if (j<0) a[i]=2;
            }
            else a[i]=0;
        }
        puts(c);
        for (i=0;i<len;i++)
        {
            if (a[i]==0) my_printf(" ");
            else if (a[i]==1) my_printf("$");
            else my_printf("?");
        }
        my_printf("\n");
    }
    return 0;
}
