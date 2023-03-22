#define NUM_ITER 591422

#include <header.h>

main_bench()
{
      int num=0,i;
      char str[1000],b,a;
      my_scanf("%s",str);
      for(i=0;i<strlen(str);i++)
        {
          for(b='A';b<='Z';b++)
          {
          if(str[i]==b || str[i]==b+32)
           {
             num=num+1;
             break;
           }
          }
          if(str[i+1]!=b && str[i+1]!=b+32)
          {
            my_printf("(%c,%d)",b,num);
            num=0;
          }
        }
    
    return (0);
    
}
