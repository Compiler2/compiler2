#define NUM_ITER 27481

#include <header.h>

int main_bench()
{
    int m,i,j,k,flag,a;
    my_scanf("%d",&m);
    if(m>=6&&m<=10000)
    {
        for(k=3;k<=m/2;k=k+2)
        {
            flag=1;
            for(i=2;i<k;i++)
            {
                if(k%i==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                a=m-k;
                for(j=2;j<a;j++)
                {
                    if(a%j==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                    my_printf("%d %d\n",k,a);
            }
        }
    }
    return 0;
}