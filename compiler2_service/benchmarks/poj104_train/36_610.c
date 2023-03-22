#include <header.h>

int num[128];
char str[1000];
int main_bench()
{
    int l1,n;

    my_scanf("%s",str);
    n=strlen(str);
    for (l1=0;l1<n;l1++)
        num[str[l1]]++;
    my_scanf("%s",str);
    n=strlen(str);
    for (l1=0;l1<n;l1++)
        num[str[l1]]--;

    for (l1=0;l1<128;l1++)
        if (num[l1]!=0)
            break;
    if (l1==128)
        my_printf("YES\n");
    else
        my_printf("NO\n");
    return 0;
}
