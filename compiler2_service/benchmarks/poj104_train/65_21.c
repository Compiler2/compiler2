#define NUM_ITER 36300

#include <header.h>

int main_bench()
{

    int n,i;
    int x,y,z;
    x=0;
    y=0;
    z=0;
    my_scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
      my_scanf("%d%d",&a[i],&b[i]);
        if(a[i]==b[i])
        z++;
        else if((a[i]==0 && b[i]==1)||(a[i]==1 && b[i]==2)||(a[i]==2 && b[i]==0))
        x++;
        else
        y++;
    }
    if(x<y)
    my_printf("B");
    else if(x==y)
    my_printf("Tie");
    else
    my_printf("A");
    return 0;
}
