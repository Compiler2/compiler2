#define NUM_ITER 32244

#include <header.h>


int main_bench()
{
    int n,i,l,sum;
    char s[220];

    my_scanf("%d",&n);
    sum=0;
    for (i=0;i<n;i++)
    {
        my_scanf("%s",s);
        l=strlen(s);
        if (sum==0) {my_printf("%s",s);sum=l;}
        else if (sum+1+l>80) {my_printf("\n%s",s);sum=l;}
        else {my_printf(" %s",s);sum=sum+1+l;}
    }
    return 0;
}
