#define NUM_ITER 8268

#include <header.h>

int main_bench()
{
 struct {
  int ID;
  int ch,math;
  int sum;
 }a[100000];
 int n,m1,m2,m3,x,y,z;
 my_scanf("%d",&n);
 my_scanf("%d %d %d",&a[0].ID,&a[0].ch,&a[0].math);
 m1=a[0].ch+a[0].math;
 int i;
 for(i=0;i<n;i++)
 {
  my_scanf("%d %d %d",&a[i].ID,&a[i].ch,&a[i].math);
  a[i].sum=a[i].ch+a[i].math;
  if(a[i].sum>m1)
  {
   m1=a[i].sum;
   x=i;
  }
 }
 my_printf("%d %d\n",a[x].ID,m1);
 a[x].ch=a[x].math=a[x].sum=0;
 int j;
 my_scanf("%d %d %d",&a[0].ID,&a[0].ch,&a[0].math);
 m2=a[0].sum;
 for(j=0;j<n;j++)
 {
  my_scanf("%d %d %d",&a[j].ID,&a[j].ch,&a[j].math);
  a[j].sum=a[j].ch+a[j].math;
  if(a[j].sum>m2)
  {
   m2=a[j].sum;
   y=j;
  }
 }
 my_printf("%d %d\n",a[y].ID,m2);
 a[y].ch=a[y].math=a[y].sum=0;
 int k;
 my_scanf("%d %d %d",&a[0].ID,&a[0].ch,&a[0].math);
 m3=a[0].sum;
 for(k=0;k<n;k++)
 {
  my_scanf("%d %d %d",&a[k].ID,&a[k].ch,&a[k].math);
  a[k].sum=a[k].ch+a[k].math;
  if(a[k].sum>m3)
  {
   m3=a[k].sum;
   z=k;
  }
 }
 my_printf("%d %d\n",a[z].ID,m3);
 return 0;
}
 
  
 

  