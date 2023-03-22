#define NUM_ITER 2675

#include <header.h>

int m,n,a[10],b[10],c[20];
void f()
{
   int i;
   my_scanf("%d%d",&m,&n);
   for(i=0;i<m;i++)
   my_scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   my_scanf("%d",&b[i]);
}
void g()
{
   int i,j,k;
   for(j=0;j<m-1;j++)
         for(i=0;i<m-j-1;i++) 
			 if(a[i]>a[i+1])
     {
        k=a[i];
        a[i]=a[i+1];
        a[i+1]=k;
     }
     for(j=0;j<n-1;j++)
		 for(i=0;i<n-j-1;i++) 
             if(b[i]>b[i+1])
     {
        k=b[i];
        b[i]=b[i+1];
        b[i+1]=k;
     }
}
void u()
{
   int i;
   for(i=0;i<m;i++)
   c[i]=a[i];
   for(i=m;i<m+n;i++)
   c[i]=b[i-m];
}
void v()
{
   int i;
   for(i=0;i<m+n-1;i++)
   my_printf("%d ",c[i]);
   my_printf("%d",c[i]);
}
int main_bench()
{
   f();
   g();
   u();
   v();
}