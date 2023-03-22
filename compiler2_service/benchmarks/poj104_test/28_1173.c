#include <header.h>

int main_bench()
{ int i,n,k;
  char ar[300][20];
  for (i=0;i<300;i++)
   my_scanf("%s",&ar[i]);
  for (i=0;i<=299;i++)
   {n=strlen(ar[i]);
    if (n!=0) {k=i;}
    else break;
    }
  for (i=0;i<=k-1;i++)
   my_printf("%d,",strlen(ar[i]));
  my_printf("%d",strlen(ar[k]));
}


