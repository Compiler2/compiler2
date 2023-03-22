#define NUM_ITER 1238474

#include <header.h>


int main_bench()
{
    char a[999]={'\0'};
    
    int i;
    gets(a);
    
    for(i=0; a[i]!='\0'; i++)
    {
             if(a[i]>='0'&&a[i]<='9')
             {
                 my_printf("%c", a[i]);
                 if(a[i+1]<'0'||a[i+1]>'9')
                 my_printf("\n");
             }
    } 
    
    return 0;
}