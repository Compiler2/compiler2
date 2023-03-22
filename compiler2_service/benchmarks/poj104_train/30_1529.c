#include <header.h>

main_bench()
{
    int i,j,k=0,n;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%7!=0)
        {
            if(i%10!=7)
            {
                if(i>=10&&((i/10)%7)!=0)
                {
                    
                    k=k+i*i;
                }
                if(i<10)
                {    
                    
                    k=k+i*i;
                }
            }
        }
    }
    my_printf("%d\n",k);
    
}
