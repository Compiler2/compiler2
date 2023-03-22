#define NUM_ITER 1351225

#include <header.h>

main_bench()
{
      char a[1000];
      gets(a);
      int i=0,time=0,temp=0;
      int len=strlen(a);
      for(i=0;i<len;i++)
      {
                        if(a[i]!=' ')
                        {
                                temp++;
                        }
                        else
                        {
                            if(temp!=0)
                            {
                                       if(time==0) my_printf("%d",temp);
                                       else my_printf(",%d",temp);
                                       time++;
                                       temp=0;
                            }
                        }
      }
      if(time==0) my_printf("%d",temp);
      else my_printf(",%d",temp);                         
}