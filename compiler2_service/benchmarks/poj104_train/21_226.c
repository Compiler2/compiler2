#define NUM_ITER 44980

#include <header.h>

int main_bench(){
  int n,a[300],i,min,max;
  float ave,sum=0;
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   my_scanf("%d",&a[i]);
   sum=sum+a[i];
  }
  ave=sum/n;
  max=a[0];
  min=a[0];
    for(i=0;i<n;i++)
  {
   if(a[i]>max)
   max=a[i];
  }
      for(i=0;i<n;i++)
  {
   if(a[i]<min)
   min=a[i];
  }

  if((max+min)>2*ave)
  my_printf("%d",max);
  else if((max+min)<2*ave)
  my_printf("%d",min);
  else
  my_printf("%d,%d",min,max);


     }
