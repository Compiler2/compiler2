#define NUM_ITER 13143

#include <header.h>

int main_bench()
{
    int n,i,a,b,c,k=0,h=0;
    my_scanf("%d",&n);
    if (n<=4)
        my_printf("empty");
    else
        for (i=3;i<n-1;i++)
        {
            for (a=2;a<=(i/2);a++)
            {
            if (i%a==0)
            {
                k=1;
                break;
            }
            }    
            if(k==0) 
            {
                b=i+2;
                for(c=2;c<=(b/2);c++)
                {
                    if(b%c==0)
                    {
                    h=1;
                    break;
                    }
                }    
                if(h==0)
                my_printf("%d %d\n",i,b);
            }
            k=0;
            h=0;
            
        }

    return 0;
}       

