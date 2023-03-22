#include <header.h>

int main_bench()
{
   int m,i,j,flag=0;
   my_scanf("%d",&m);
   for (i=3;i<=m/2;i+=2)
 {
      {
        for (j=3;j<=i/2;j+=2)
        if (i%j==0) flag=1;
        for (j=3;j<=(m-i)/2;j+=2)
        if ((m-i)%j==0) flag=1;
      }
      if (flag==0) my_printf("%d %d\n",i,m-i);
      flag=0;
 }
   return 0;
}
