#define NUM_ITER 45221

#include <header.h>

int main_bench()
{
 int arr[100];
 int n=0;
 my_scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  my_scanf("%d",&arr[i]);
 }
 int max=-10000;
 for(int s=0;s<n;s++)
 {
  max=(max>=arr[s])?max:arr[s];
 }
 int sm=-10000;
 for(int j=0;j<n;j++)
 {
      if(arr[j]!=max)
  {
if(arr[j]>sm)
sm=arr[j];
  }
 }
 my_printf("%d\n",max);
 my_printf("%d",sm);
 return 0;
}