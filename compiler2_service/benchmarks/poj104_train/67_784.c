#define NUM_ITER 28015

#include <header.h>

int main_bench()
{
  int n,i,j;
  float all[1000],some[1000];
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    my_scanf("%f %f",&all[i],&some[i]);
  }
  for(j=1;j<n;j++)
  {
    if(((some[j]/all[j])-(some[0]/all[0]))>0.05)
    {
      my_printf("better\n");
    }
    else
   {
    if(((some[0]/all[0])-(some[j]/all[j]))>0.05)
    {
      my_printf("worse\n");
    }
    else
    {
      my_printf("same\n");
    }
   }
  }
  return 0;
} 
