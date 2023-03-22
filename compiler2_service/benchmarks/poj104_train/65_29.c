#include <header.h>

int main_bench()
{
    int n,i,a,b,sum=0,huk=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d %d",&a,&b);
        if(a==1&&b==0||a==0&&b==2||a==2&&b==1)
        {
            huk++;
        }
        if(a==0&&b==1||a==1&&b==2||a==2&&b==0)
        {
            sum++;
        }
    }
    if(sum>huk)
    my_printf("A");
    else if(sum<huk)
    my_printf("B");
    else
    my_printf("Tie");
    return 0;
}
