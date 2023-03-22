#include <header.h>

int main_bench()
{
    int deno[6] = {100,50,20,10,5,1};
    int money;
    my_scanf("%d",&money);
    int count[6];
    for (int i=0;i<6;++i) count[i] = 0;
    while (money!=0)
    {
        for (int i=0;i<6;++i)
        {
            if (money>=deno[i])
            {
                money -= deno[i];
                count[i]++;
                break;                   
            }    
        }              
    }
    for (int i=0;i<6;++i)
    {
        my_printf("%d\n",count[i]);    
    }        
    return 0;
}