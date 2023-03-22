#include <header.h>

int judge(int x);
int main_bench()
{
        int n,p,q,i,j,k;
        my_scanf("%d",&n);
        if(n<=4)
        {
                my_printf("empty");
        }
        else if(n<=6)
        {
                my_printf("3 5");
        }
        else if(n<=10)
        {
                my_printf("3 5\n5 7");
        }
        else 
        {
                my_printf("3 5\n5 7\n");
                for(i=11,k=13;k<=n;i=i+2,k=k+2)
                {
                
                        p=judge(i);
                        q=judge(k);
                        if((q==0)&&(p==0))
                        {
                                my_printf("%d %d\n",i,k);
                        }
                }
        }

        return 0;

}



int judge(int x)
{
        int i=0,j;
        for(j=2;j<x;j++)
        {
                if(x%j==0)
                {
                        i=1;
                }
        }
        return i;
}