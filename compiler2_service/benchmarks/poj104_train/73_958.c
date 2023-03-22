#define NUM_ITER 201377

#include <header.h>

int main_bench()
{
 int an,hang,lie,i,r,a[5][5],paohuierhao=0;
 for(i=0;i<5;i++)
 {
  for(r=0;r<5;r++)
  my_scanf("%d",&a[i][r]);
 }
 for(i=0;i<5;i++)
 {
  int paohui=0;
  an=a[i][0];
  hang=i+1;
  lie=1;
  for(r=0;r<5;r++)
  {
   if(an<a[i][r])
   {
    an=a[i][r];
    lie=r+1;
   }
  }
  for(r=0;r<5;r++)
  {
   if(an>a[r][lie-1])
   {
    paohui++;
    break;
   }
  }
  if(paohui==0)
  {
   my_printf("%d %d %d",hang,lie,an);
   paohuierhao++;
  }
 }
if(paohuierhao==0)
my_printf("not found");
return 0;
}