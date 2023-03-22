#define NUM_ITER 2224

#include <header.h>

int a[400],b[200],n,m;
void run1()
{
     int i;
     my_scanf("%d%d",&n,&m);
     for (i=1;i<=n;i++)
         my_scanf("%d",&a[i]);
     for (i=1;i<=m;i++)
         my_scanf("%d",&b[i]);
}
void sort(int a[],int n)
{
     int i,j,x;
     for (i=1;i<n;i++)
         for (j=i+1;j<=n;j++)
             if (a[i]>a[j])
             {
                x=a[i]; a[i]=a[j]; a[j]=x;
             }
}
void run2()
{
     sort(a,n);
     sort(b,m);
}
void run3()
{
     int i;
     for (i=1;i<=m;i++)
         a[i+n]=b[i];
}
void run4()
{
     int i;
     for (i=1;i<n+m;i++)
         my_printf("%d ",a[i]);
     my_printf("%d",a[n+m]);
}
int main_bench()
{
    run1();
    run2();
    run3();
    run4();
}
