#include <header.h>

main_bench()
{
      char a[100000];
      int b,c,d,e,f,h;
      int g[100000];
      my_scanf("%d",&b);
      for(c=0;c<b;c++)
      {
      for(h=0;h<100000;h++)
      g[h]=0;
      my_scanf("%s",a);
      e=strlen(a);
      for(d=0;d<e-1;d++)
      {
      for(f=d+1;f<e;f++)
      {
                        if(a[f]==a[d])
                        {
                        g[f]++;
                        g[d]++;
                        }
                        }
                        if(f==e&&g[d]==0)
                        {
                        my_printf("%c\n",a[d]);
                        break;
                        }
                        }
      if(d==e-1)
      my_printf("no\n");
      }
      }