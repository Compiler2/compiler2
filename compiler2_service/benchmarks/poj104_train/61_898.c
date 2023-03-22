#define NUM_ITER 31987

#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    for(int z=0;z<n;z++)
    {
            int m;
            my_scanf("%d",&m);
            if(m==1||m==2)
            {my_printf("1\n");break;}
            int a=1,b=1,d,c;
            for(int i=2;i<m;i++)
            {
                    c=a+b;
                    d=b;
                    b=c;
                    a=d;
            }
            my_printf("%d\n",b);
    }
}