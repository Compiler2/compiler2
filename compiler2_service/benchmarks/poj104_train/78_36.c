#define NUM_ITER 1430053

#include <header.h>

main_bench()
{
      int z,q,s,l;
      for(l=5;l>=4;l--)
      {
                       for(q=l-1;q>=3;q--)
                       {
                                          for(z=q-1;z>=2;z--)
                                          {
                                                             for(s=z-1;s>=1;s--)
                                                             {
                                                                                if(z+q==s+l&&z+l>s+q&&z+s<q)
                                                                                {
                                                                                                            my_printf("l ");
                                                                                                            my_printf("%d\n",l*10);
                                                                                                            my_printf("q ");
                                                                                                            my_printf("%d\n",q*10);
                                                                                                            my_printf("z ");
                                                                                                            my_printf("%d\n",z*10);
                                                                                                            my_printf("s ");
                                                                                                            my_printf("%d\n",s*10);
                                                                                }
                                                             }
                                          }
                       }
      }
      getchar();
      getchar();
}
