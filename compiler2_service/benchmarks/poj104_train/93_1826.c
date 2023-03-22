#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    int r3 = 0, r5 = 0, r7 = 0;
    if (n%3!=0) r3 = 1;
    if (n%5!=0) r5 = 1;
    if (n%7!=0) r7 = 1;
    int temp = r3*4 + r5*2 +r7;    
    switch (temp)
    {
        case 7 :
             my_printf("n\n");
             break;
        case 1 :
             my_printf("3 5\n");
             break;
        case 2 :
             my_printf("3 7\n");
             break;
        case 4 :
             my_printf("5 7\n");
             break;
        case 6 :
             my_printf("7\n");
             break;
        case 5 :
             my_printf("5\n");
             break;
        case 3 :
             my_printf("3\n");
             break;
        case 0 : 
             my_printf("3 5 7\n");
             break;      
    }   
    getchar();
    getchar(); 
    return 0;
}
