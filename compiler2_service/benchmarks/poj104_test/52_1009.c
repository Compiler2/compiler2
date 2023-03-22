#include <header.h>

int main_bench()
{
  void move(int array[],int x,int y);
  int num[120];
  int i,m,n;
  my_scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
  {
    if(i==n-1)
    my_scanf("%d",&num[i]);
    else my_scanf("%d ",&num[i]);
   }
   move(num,n,m);
   for(i=0;i<n;i++)
   {
     if(i==n-1)
     my_printf("%d",num[i]);
     else my_printf("%d ",num[i]);
    }
    my_printf("\n");
}
 void move(int array[],int x,int y)
{
  int *p,array_end;
  array_end=*(array+x-1);
  for(p=array+x-1;p>array;p--)
  *p=*(p-1);
  *array=array_end;
  y--;
  if(y>0)
  move(array,x,y);
}
   