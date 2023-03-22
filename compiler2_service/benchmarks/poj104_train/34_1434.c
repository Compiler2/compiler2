#include <header.h>

void jiaogu(int i)
{
    if(i==1) my_printf("End");
    else
    {
        if(i%2)
        {
            my_printf("%d*3+1=%d\n",i,i*3+1);
            jiaogu(i*3+1);
        }
        else
        {
            my_printf("%d/2=%d\n",i,i/2);
            jiaogu(i/2);
        }
    }
}
main_bench()
{
    int n,temp;
    my_scanf("%d",&n);
    jiaogu(n);
}
