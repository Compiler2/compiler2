#include <header.h>

int main_bench()
{
    int x=0,y=0,z=0;
    my_scanf("%d",&x);
    int k=0;
    while(my_scanf(",%d",&z))
    {
    	k++;
    	if(z>x) {y=x;x=z;}
    	if(z<x&&z>y) y=z; 
    }
    if(k==0||y==0)my_printf("No");
    else my_printf("%d",y);
    return 0;
}