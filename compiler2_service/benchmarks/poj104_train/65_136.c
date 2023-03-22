#include <header.h>

    int main_bench()
    {
        int n,z=0,k=0;
        my_scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int a,b;
            my_scanf("%d%d",&a,&b);
            if(a!=b){if(a==0)
            {
                if(b==1)
                {
                    z++;
                }
            }
            else if(a==1)
            {
                if(b==2)
                {
                    z++;
                }
            }
            else if(a==2)
            {
                if(b==0)
                {
                    z++;
                }
            }  
            }
            else if(a==b)
            {
                k++;
            }
        }
        if((n-z-k)==z)
        {
            my_printf("Tie");
        }
        else if((n-z-k)<z)
        {
            my_printf("A");
        }
        else if((n-z-k)>z)
        {
            my_printf("B");
        }
        return 0;
    }
