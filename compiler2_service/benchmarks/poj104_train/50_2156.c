#include <header.h>

main_bench()
{
      int w,k=0;
      my_scanf("%d",&w);
      if(((w=w+12)%7)==5) k++,my_printf("1\n");
      if(((w=w+31)%7)==5) k++,my_printf("2\n");
      if(((w=w+28)%7)==5) k++,my_printf("3\n");
      if(((w=w+31)%7)==5) k++,my_printf("4\n");
      if(((w=w+30)%7)==5) k++,my_printf("5\n");
      if(((w=w+31)%7)==5) k++,my_printf("6\n");
      if(((w=w+30)%7)==5) k++,my_printf("7\n");
      if(((w=w+31)%7)==5) k++,my_printf("8\n");
      if(((w=w+31)%7)==5) k++,my_printf("9\n");
      if(((w=w+30)%7)==5) k++,my_printf("10\n");
      if(((w=w+31)%7)==5) k++,my_printf("11\n");
      if(((w=w+30)%7)==5) k++,my_printf("12\n");
      if(k==0) my_printf("Not found");
      
      }