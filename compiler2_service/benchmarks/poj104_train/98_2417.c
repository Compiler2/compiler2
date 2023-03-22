#include <header.h>


char dat[1000][41];
int main_bench()
{
    int l1,cou;
    int n;

    my_scanf("%d",&n);
    for (l1=1;l1<=n;l1++)
        my_scanf("%s",dat[l1]);

    my_printf("%s",dat[1]);
    cou=strlen(dat[1]);
    for (l1=2;l1<=n;l1++)
        if (cou+strlen(dat[l1])+1>80)
            {
                my_printf("\n%s",dat[l1]);
                cou=strlen(dat[l1]);
            }
        else
            {
                my_printf(" %s",dat[l1]);
                cou+=strlen(dat[l1])+1;
            }

    return 0;
}
