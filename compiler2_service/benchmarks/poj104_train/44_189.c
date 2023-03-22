#include <header.h>

int reverse(int num) 
{
    int retval = 0;
    while(num) 
    { 
    retval = retval*10 + num%10; 
    num=num/10; 
    } 
    return retval; 
} 
int main_bench()
{
     int i,a[6],b[6];
     for(i=0;i<6;i++)
     {
         my_scanf("%d",&a[i]);
         b[i]=reverse(a[i]);
         my_printf("%d\n",b[i]);
     }
}

   
