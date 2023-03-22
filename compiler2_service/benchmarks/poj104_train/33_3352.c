#define NUM_ITER 34329

#include <header.h>

main_bench()
{
    char a[1000];
    int n,i;
    my_scanf("%d",&n);
    for(;n>0;n--)
    {
        my_scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='A')
            my_printf("T");
            if(a[i]=='T')
            my_printf("A");
            if(a[i]=='C')
            my_printf("G");
            if(a[i]=='G')
            my_printf("C");
        }
        my_printf("\n");
    }
}
