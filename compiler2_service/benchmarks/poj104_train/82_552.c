#define NUM_ITER 36641

#include <header.h>

int main_bench()
{
  int x,y,z,i,n,a,b,c;
  z=0;
  a=0;
  my_scanf("%d",&n);
  for(i=1;i<=n;i++)
  {my_scanf("%d %d",&x,&y);
   if(x>=90&&x<=140&&y>=60&&y<=90)
   z++;
   else z=0;
   if(z>=a) a=z; 
       }
  my_printf("%d",a);
   return 0;
}