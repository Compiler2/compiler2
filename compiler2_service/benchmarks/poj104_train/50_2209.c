#include <header.h>


main_bench()
{
      int w;
      my_scanf("%d",&w);
      if(w<=6)w=7-w;
      else w=7;
      if(13%7==w-1) my_printf("1\n");
      if(44%7==w-1) my_printf("2\n");
      if(72%7==w-1) my_printf("3\n");
      if(103%7==w-1) my_printf("4\n");
      if(133%7==w-1) my_printf("5\n");
      if(164%7==w-1) my_printf("6\n");
      if(194%7==w-1) my_printf("7\n");
      if(225%7==w-1) my_printf("8\n");
      if(256%7==w-1) my_printf("9\n");
      if(286%7==w-1) my_printf("10\n");
      if(317%7==w-1) my_printf("11\n");
      if(347%7==w-1) my_printf("12\n");

}
