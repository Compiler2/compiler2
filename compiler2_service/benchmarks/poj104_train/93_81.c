#include <header.h>


main_bench()
{
      int n, is3, is5, is7;
      int is;
      my_scanf("%d", &n);
      
      is3 = (n % 3 == 0);
      is5 = (n % 5 == 0);
      is7 = (n % 7 == 0);
      
      is = is3 + is5 + is7;
      switch(is)
      {
                case 0:
                     {
                           my_printf("n");
                           break;
                     }
                case 3:
                     {
                           my_printf("3 5 7");
                           break;
                     }
                case 2:
                     {
                           if(is3 && is5) my_printf("3 5");
                           if(is5 && is7) my_printf("5 7");
                           if(is7 && is3) my_printf("3 7");
                           break;
                     }
                case 1:
                     {
                           if(is3) my_printf("3");
                           if(is5) my_printf("5");
                           if(is7) my_printf("7");
                     }
      }
}
