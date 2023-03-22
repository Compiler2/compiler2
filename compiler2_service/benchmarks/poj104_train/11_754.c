#define NUM_ITER 1304938

#include <header.h>

int main_bench()
{
    int y,m,d,n;
    my_scanf ("%d %d %d",&y,&m,&d);
    if (y%4==0&&y%100!=0||y%400==0)
    {
           switch(m)
           {
           case 1:my_printf("%d",d);break;
           case 2:my_printf("%d",31+d);break;
           case 3:my_printf("%d",60+d);break;
           case 4:my_printf("%d",91+d);break;
           case 5:my_printf("%d",121+d);break;
           case 6:my_printf("%d",152+d);break;          
           case 7:my_printf("%d",182+d);break;
           case 8:my_printf("%d",213+d);break;
           case 9:my_printf("%d",244+d);break;
           case 10:my_printf("%d",274+d);break;
           case 11:my_printf("%d",305+d);break;
           case 12:my_printf("%d",335+d);break;
           }             
    }
    else
        {
           switch(m)
           {
           case 1:my_printf("%d",d);break;
           case 2:my_printf("%d",31+d);break;
           case 3:my_printf("%d",59+d);break;
           case 4:my_printf("%d",90+d);break;
           case 5:my_printf("%d",120+d);break;
           case 6:my_printf("%d",151+d);break;          
           case 7:my_printf("%d",181+d);break;
           case 8:my_printf("%d",212+d);break;
           case 9:my_printf("%d",243+d);break;
           case 10:my_printf("%d",273+d);break;
           case 11:my_printf("%d",304+d);break;
           case 12:my_printf("%d",334+d);break;
           }             
    }
   
    }
