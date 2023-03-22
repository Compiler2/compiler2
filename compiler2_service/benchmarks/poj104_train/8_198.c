#define NUM_ITER 2186

#include <header.h>

int m,n;
void get (int a[200],int b[200])
{
 int i;
 my_scanf("%d %d",&m,&n);
 for (i=0;i<m;i++)
  my_scanf("%d",&a[i]);
 for (i=0;i<n;i++)
  my_scanf("%d",&b[i]);
}
void sequence (int a[200], int p)
{
 int i,j,temp;
 for (i=0;i<p;i++)
  for (j=i+1;j<p;j++)
   if (a[j]<a[i])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
  
}
void combine (int a[200],int p,int b[200],int q)
{
 int j;
 for (j=0;j<q;j++)
  a[p+j]=b[j];
}
void show (int a[200], int p)
{
 int i;
 for (i=0;i<p-1;i++)
 {
  my_printf("%d ",a[i]);
 }
 my_printf("%d",a[p-1]);
}
int main_bench()
{
 int a[200],b[200];
 get (a,b);
 sequence (a,m);
 sequence (b,n);
 combine (a,m,b,n);
 show (a,m+n);
}