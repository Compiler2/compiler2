#include <header.h>

int main_bench()
{
 int a[10001],b[10001],i,j,n,z=0,x,y=0,ma,mb,c;
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  my_scanf("%d%d",&a[i],&b[i]);
 }
 ma=a[0];
 mb=b[0];
 for(i=1;i<n;i++)
 {
  if(a[i]<ma)
   ma=a[i];
  if(b[i]>mb)
   mb=b[i];
 }
 c=mb-ma;

 
 for(x=ma;x<=mb;x++)
 {
  for(j=0;j<n;j++)
  {
  z=1;
   if(x+0.5<=b[j] && x+0.5>=a[j])
   break;
   else z=0;
  }
  y=y+z;
 }

 
 if(y==c)
  {
  my_printf("%d %d",ma,mb);
  }
 else
 {
  my_printf("no");
 } 
 
 my_scanf(" ") ;
 return 0;
}
