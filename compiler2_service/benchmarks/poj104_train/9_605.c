#define NUM_ITER 3712

#include <header.h>

int main_bench()
{
   int n,i,j,y[200],p[200];
   char a[100][11];
   my_scanf("%d",&n);
   for(i=0;i<200;i++)
   {
    p[i]=200-i;
   }
   for(i=0;i<n;i++)
  {
    my_scanf("%s %d",a[i],&y[i]);
  }
  for(i=0;i<=140;i++)
  {
    for(j=0;j<n;j++)
     {
       if(y[j]==p[i])
       my_printf("%s\n",a[j]);
     }
  }
  for(i=0;i<n;i++)
 {
  if(y[i]<60)
  my_printf("%s\n",a[i]);
 }
  getchar();
  getchar();
}