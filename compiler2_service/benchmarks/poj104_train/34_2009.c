#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    turn:if (n!=1) 
    {
            if (n%2==0) 
            {
                        my_printf("%d/2=%d\n",n,n/2);
                        n=n/2;
                        goto turn;
                        }
            else 
            {
                 my_printf("%d*3+1=%d\n",n,n*3+1);       
                 n=n*3+1;
                 goto turn;
                 }
    }
    my_printf("End");
}
