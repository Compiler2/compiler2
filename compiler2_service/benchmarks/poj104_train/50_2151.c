#include <header.h>

int main_bench()
{   int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int w,i,j,k;
    my_scanf("%d",&w);
    j=12;
    if((w+j)%7==5)
    my_printf("1\n");
    for(i=1;i<12;i++)
    {
        j=j+a[i-1];             
        if((w+j)%7==5)
        my_printf("%d\n",i+1);             
                     
                     
    }


    
return 0;    
    
}
