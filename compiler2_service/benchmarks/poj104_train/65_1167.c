#include <header.h>

int main_bench()
{
    int n,a=0,b=0,c;
    my_scanf("%d",&n);
    int sz[n][2];
    for (int i=0;i<n;i++)
    {
        my_scanf("%d%d\n",&sz[i][0],&sz[i][1]);
        c=sz[i][0]-sz[i][1];
        if(c==-1||c==2)
        {
            a++;
        }
        if(c==1||c==-2)
        {
            b++;
        }
    }
    if(a>b)
    {
        my_printf("A");
    }
    if(a<b)
    {
        my_printf("B");
    }
    if(a==b)
    {
        my_printf("Tie");
    }
    
    return 0;
}

