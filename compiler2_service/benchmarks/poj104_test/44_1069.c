#include <header.h>


int reverse(int num)
{
    if(num==0||num==-0)
        return 0;
        
    int x=abs(num);
    
    if(num<0)
        my_printf("-");
        
    while(x%10==0)
    {
        x/=10;
    }
    
    while(x!=0)
    {
        my_printf("%d", x%10);
        x/=10;
    }
    
    my_printf("\n");
    return 1;
}

int main_bench()
{
    int num, i;
    for(i=0;i<6;i++)
    {
        my_scanf("%d", &num);
        
        if(reverse(num)==0)
            my_printf("0\n");
    }

    return 0;
}