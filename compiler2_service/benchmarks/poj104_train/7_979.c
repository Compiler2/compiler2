#define NUM_ITER 573776

#include <header.h>

main_bench()
{
      char a[260],b[260],c[260];
      my_scanf("%s",a);
      my_scanf("%s",b);
      my_scanf("%s",c);
      for(int i=0;a[i]!='\0';i++)
      {
              int k=0;
              if(a[i]==b[0])
              {
                          k=1;
                          for(int e=0;b[e]!='\0';e++)
                          {
                                  if(a[i+e]!=b[e])
                                  k=0;
                          }
                          if(k==1)
                          for(int f=0;b[f]!='\0';f++)
                          {
                                  a[i+f]=c[f];
                          }
              }
              if(k==1)
              break;
      }
      puts(a);

}