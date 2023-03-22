#include <header.h>

main_bench()
{
      int a;
      my_scanf("%d",&a);
      while (a>1) {
            if (a%2==0) {
            my_printf("%d",a);
            a=a/2;
            my_printf("/2=%d\n",a);
            }
            else {
            my_printf("%d",a);
            a=a*3+1;
            my_printf("*3+1=%d\n",a);
            }
            }
      my_printf("End\n");
            getchar();
            getchar();
            getchar();
            getchar();
            getchar();
}
