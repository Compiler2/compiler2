#define NUM_ITER 209889

#include <header.h>

main_bench()
{
      char a[10000];int b[10000]={0};
      int i=0,j,p;
      gets(a);
      for(j=0;a[i]!='\0';i++)
      {
                             if(a[i]!=' ')
                             {
                             b[j]++;
                             }
                             else
                             {
                             if(b[j]!=0)
                             my_printf("%d,",b[j]);
                             j++;
                             }
      }
      my_printf("%d",b[j]);
    
}
