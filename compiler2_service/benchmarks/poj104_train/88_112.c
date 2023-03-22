#define NUM_ITER 219731

#include <header.h>

main_bench()
{
    char str[31];
    gets(str);
    int n;
    n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
            my_printf("%c",str[i]);
        else
        {
            my_printf("\n");
            for(;str[i]<'0'||str[i]>'9';i++)
            {}
            i--;
        }
    }
    getchar();
}
