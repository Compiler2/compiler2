#define NUM_ITER 4848

#include <header.h>

int main_bench()
{
    int n;
    int i,j;
    struct
    {
        int a,b;
    } q[5000],c;
    int star,end,e;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d%d",&q[i].a,&q[i].b);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(q[j].a>q[j+1].a)
            {
                c=q[j];
                q[j]=q[j+1];
                q[j+1]=c;
            }
        }
    }
    star=q[0].a;
    end=q[0].b;
    for(i=1;i<n;i++)
    {
        if(end<q[i].a)
        {
            e=0;
            break;
        }
        else 
        {
            e=1;
            if(end<q[i].b)
        {
            end=q[i].b;
        }
        }
    }
    if(e==0)
    my_printf("no");
    if(e==1)
    my_printf("%d %d",star,end);
    return 0;
}
