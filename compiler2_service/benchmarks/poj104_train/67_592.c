#include <header.h>






int main_bench()
{
    int n,all,valid;
    int i;
    double x,y;
    my_scanf("%d",&n);
     my_scanf("%d %d",&all,&valid);
     x=(double)valid/all;
    for(i=1;i<n;i++)
    {
                    my_scanf("%d %d",&all,&valid);
                    y=(double)valid/all;
                    if(x-y>0.05)
                    my_printf("worse\n");
                    if(y-x>0.05)
                    my_printf("better\n");
                    if(x-y<0.05&&y-x<0.05)
                    my_printf("same\n");
     }     
     getchar();
     getchar();         
    
}

 
 
