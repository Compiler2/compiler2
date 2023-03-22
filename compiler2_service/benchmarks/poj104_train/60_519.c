#include <header.h>

int main_bench()
{
      int n,k,i,t,j,b = 0;
      my_scanf("%d",&n);
      int a[n+10];
      for (j = 1;j < n;j++)
        a[j] = 0;
      for (i = 2;i <= n;i++)
      {
          t = 0;
          for (k = 2;k < i;k++)
              if (i % k == 0)
              t = 1;
          if (t == 0)
             a[i] = i;    
      }
      for (i = 2; i <= n;i++)
      {
          if((a[i+2] - 2) == i && a[i] == i)
          {
             my_printf("%d %d\n",i,i+2);
             b = b + 1;
          }
      }
      if (b == 0)
        my_printf("empty");
return 0;
}

