#define NUM_ITER 46902

#include <header.h>

int prime[1000001];
int tot = 0;
int main_bench()
{
    int j;
    int n;
    int t = 0;
    my_scanf("%d",&n);
    for(int i = 2; i <= n; i++)
    {
        for(j = 0; j < tot; j++)
        {
             if(i%prime[j] == 0) break;
        }
        if(j == tot){
             if(tot > 0 && prime[tot-1]+2 == i) {
                 my_printf("%d %d\n", prime[tot-1], i);
                 t = 1;
             }
             prime[tot++] = i;
        }
     }
     if(!t)my_printf("empty");
     return 0;
}
    