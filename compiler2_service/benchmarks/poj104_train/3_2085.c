#define NUM_ITER 6036

#include <header.h>

int main_bench()
{  
    int sz[2000];
    int n,k,s,b;
    b=0;
    my_scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
            my_scanf("%d",&sz[i]);
            if(i>=1&&i<n)
            for(int a=0;a<i;a++)
            {
                    s=sz[i]+sz[a];
                    if(s==k)
                    b++;
            }
    }
    if(b!=0)
    my_printf("yes");
    else if(b==0)
    my_printf("no");
return 0;
}