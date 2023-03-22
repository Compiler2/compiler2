#define NUM_ITER 1878292

#include <header.h>

main_bench()
{   int  a,b,c,d,e,f;
    my_scanf("%d\n",&f);
    if(f==10000)
    my_printf("00001");
    else if(f>=1000&&f<=9999)
      {b=(int)f/1000;
      c=(int)(f-b*1000)/100;
      d=(int)(f-b*1000-c*100)/10;
      e=f-b*1000-c*100-d*10;
      my_printf("%d%d%d%d",e,d,c,b);}
    else if(f>=100&&f<=999)
         {c=(int)f/100;
         d=(int)(f-c*100)/10;
         e=(f-c*100-d*10);
         my_printf("%d%d%d",e,d,c);}
    else if(f>=10&&f<=99)
           {d=(int)f/10;
           e=(f-d*10);
           my_printf("%d%d",e,d);}
    else if(f>=0&&f<=9)
           my_printf("%d",f);
}
