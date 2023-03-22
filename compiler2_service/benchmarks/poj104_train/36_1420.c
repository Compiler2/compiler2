#define NUM_ITER 116589

#include <header.h>

main_bench()
{
      int a[128],b[128];
      int i,j = 0;
      for(i = 0;i < 128;i++)
      {
            a[i] = 0;
            b[i] = 0;
      }

      char str_1[1000],str_2[1000];
      my_scanf("%s %s",str_1,str_2);
      
      for(i = 0;i <= strlen(str_1);i++)
            a[(int)str_1[i]]++;
      for(i = 0;i <= strlen(str_2);i++)
            b[(int)str_2[i]]++;
      
      for(i = 0;i < 128;i++)
            if(a[i] == b[i])
                    j++;
      
      if(j == 128)
           my_printf("YES");
      else
          my_printf("NO");
}
