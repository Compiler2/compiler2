#include <header.h>

main_bench()
{
    int n;
    my_scanf("%d",&n);
    char word[n][41];
    for(int i=0;i<n;i++)
    {
        my_scanf("%s",word[i]);
    }
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(l==0)
        {
            my_printf("%s",word[i]);
            l+=strlen(word[i]);
        }
        else
        {
            l+=strlen(word[i])+1;
            if(l<81)
                my_printf(" %s",word[i]);
            else
            {
                my_printf("\n");
                l=0;
                i--;
            }
        }
    }
}
