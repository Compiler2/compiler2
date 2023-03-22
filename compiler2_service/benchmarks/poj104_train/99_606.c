#include <header.h>

int main_bench()
{
    int n,a=0,b=0,c=0,d=0,age[100],i;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    my_scanf("%d",&age[i]);
    
    for(i=0;i<n;i++)
    {
                    if(age[i]<=18)
                    a++;
                    else
                    {
                        if(age[i]<=35)
                        b++;
                        else
                        {
                            if(age[i]<=60)
                            c++;
                            else
                            d++;
                        }
                    }
    }
    my_printf("1-18: %.2f",(double)(100*a)/(double)n);
    my_printf("%%\n");
    my_printf("19-35: %.2f",(double)(100*b)/(double)n);
    my_printf("%%\n");
    my_printf("36-60: %.2f",(double)(100*c)/(double)n);
    my_printf("%%\n");
    my_printf("60??: %.2f",(double)(100*d)/(double)n);
    my_printf("%%\n");
    return 0;
}