#define NUM_ITER 921020

#include <header.h>

main_bench()
{
      char num[101];
      int i,first,lenth,mod,cache;
      gets(num);
      lenth=strlen(num);
      int bit[lenth];
      for(i=0;i<lenth;i++)
      bit[i]=num[i]-'0';
      if(lenth==1)
      my_printf("0\n%d",bit[0]);
      else if(lenth==2&&bit[0]*10+bit[1]<13)
      my_printf("0\n%d",bit[0]*10+bit[1]);
      else
      {
            first=bit[0]*10+bit[1];
            if(first/13!=0)
            my_printf("%d",first/13);
            mod=first%13;
            for(i=2;i<lenth;i++)
            {
                     cache=mod*10+bit[i];
                     my_printf("%d",cache/13);
                     mod=cache%13;
            }
            my_printf("\n%d",mod);
      }
      getchar();
      getchar();
}