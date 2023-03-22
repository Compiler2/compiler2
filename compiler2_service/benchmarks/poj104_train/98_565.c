#define NUM_ITER 32449

#include <header.h>

int main_bench()
{
  char a[20];
  int n,i,k=0;
  my_scanf("%d",&n);
  getchar();
  my_scanf("%s",a);
  my_printf("%s",a);
  k=strlen(a);
  for(i=1;i<n;i++)
  {
       my_scanf("%s",a);
       k=k+1+strlen(a);
       if(k>80)
       {
            my_printf("\n%s",a);
            k=strlen(a);
            continue;
       }
       if(k<=80)
       my_printf(" %s",a);
  }
  return 0;
}
