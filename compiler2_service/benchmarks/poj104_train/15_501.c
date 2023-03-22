#define NUM_ITER 676

#include <header.h>

int  main_bench()
{int n,i,j,a[500][500],x=0,y=0;
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   my_scanf("%d",&a[i][j]);
 }

for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[i][j]==0)
    x++;
  }
  if(x!=0)
   break;
 }
    for(j=0;j<n;j++)
 {
  for(i=0;i<n;i++)
  {
   if(a[i][j]==0)
    y++;
  }
  if(y!=0)
   break;
 }
 my_printf("%d\n",(x-2)*(y-2));


return 0;


}