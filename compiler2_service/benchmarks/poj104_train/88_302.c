#include <header.h>


int main_bench()
{
    int n, i;
    char num[30];
    gets(num);

    n=strlen(num);
    for(i=0;i<n;i++)
    {
        if(num[i]!=96&&num[i]!=109)
        {
            while(num[i]>=48&&num[i]<=57)
            {
                putchar(num[i]);
                i++;
                continue;
            }
        }
        my_printf("\n");
    }

    return 0;
}