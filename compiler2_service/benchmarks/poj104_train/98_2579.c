#include <header.h>

main_bench()
{
    char word[41];
    int sum=0,n,t;
    my_scanf("%d",&n);
    t=n;
    while(n>0)
    {
        my_scanf("%s",word);
        if((sum+strlen(word)+1<=80)&&n!=t)
        {
            my_printf(" ");
            sum++;
        }
        else
        {
            my_printf("\n");sum=0;
        }
        sum=sum+strlen(word);
        my_printf("%s",word);
        memset(word,0,sizeof(word));
        n--;
    }
}
