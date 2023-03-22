#define NUM_ITER 18152

#include <header.h>

int main_bench()
{
 int i,j,n,num[300],temp,flag=0;
 my_scanf("%d",&n);
 my_scanf("%d",&num[0]);
 for(i=1;i<n;i++)
 {
  my_scanf("%d",&temp);
  for(j=0;j<i;j++)
  {
   if(temp==num[j])
   {
    flag = 1;
    break;
   }
  }
  if(flag)
  {
   i--;
   n--;
  }
  else
  {
   num[i]=temp;
  }
  flag = 0;
 }
my_printf("%d",num[0]);
 for(i=1;i<n;i++)
 {
  my_printf(",%d",num[i]);
 }
return 0;
}