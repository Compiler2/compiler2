#include <header.h>

main_bench()
{
      int a[100],m,i,k;
      float n,a1,a2,a3;
      my_scanf("%d",&m);
      i=0;
      while(i<m)
      {
                my_scanf("%d",&a[i]);
                i=i+1;
      }
      i=0;
      while(i<m)
      {
                a1=1;
                a2=2;
                n=0;
                k=1;
                while(k<=a[i])
                {
                    n=a2/a1+n;
                    a3=a2;
                    a2=a1+a2;
                    a1=a3;
                    k=k+1;
                    }
                    my_printf("%.3f\n",n);
                    i=i+1;
                    }
                    getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
                    }       