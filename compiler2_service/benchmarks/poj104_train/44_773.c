#define NUM_ITER 111522

#include <header.h>

int main_bench()
{
 int reverse(int);
 int i,n;
 for(i=0;i<6;i++)
 {my_scanf("%d",&n);
  my_printf("%d\n",reverse(n));}
}
int reverse(int n)
{
 int i,j,a[20]={0};
 a[0]=n;
 for(i=0;i<19;i++)
 {a[i+1]=a[i]/10;
  a[i]=a[i]-10*a[i+1];}
 for(i=0;i<20;i++)
  if(a[i]!=0)
   j=i;
 n=a[0];
 for(i=0;i<j;i++)
  n=n*10+a[i+1];
 return n;
}