#define NUM_ITER 5894

#include <header.h>

int main_bench()
{
int n;
my_scanf("%d",&n);
 int num[n],temp;
 int i=0;
 
 while(i<n)
 {
  my_scanf("%d",&num[i]);
  i++;
 }
 for(int x=0;x<n-1;x++)
 {
  for(int y=n-1;y>x;y--)
  {
   if(num[y]>num[y-1])
   {
    temp=num[y];
    num[y]=num[y-1];
    num[y-1]=temp;
   }
  }
 }
 my_printf("%d\n%d\n",num[0],num[1]);
return 0;
}