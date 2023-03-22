#define NUM_ITER 49916

#include <header.h>

int F_num[10000]; 
int main_bench()
{
    int test_total,max = 0,test_site;
    int i,j,k;
    F_num[0]=1;
    F_num[1]=1;
    max = 1;
    my_scanf ("%d",&test_total);
    for (i=0; i<test_total; i++)
    {
        my_scanf ("%d", &test_site);
        if (max >= test_site)
        {
                my_printf("%d\n", F_num[test_site-1]);
        }
        else
        {
            for(j=max +1; j<=test_site; j++)
            {
                      F_num[j] = F_num[j-1]+F_num[j-2];
            }
            max = test_site;
            my_printf("%d\n", F_num[test_site-1]);
        }
    } 
    return 0;
}
