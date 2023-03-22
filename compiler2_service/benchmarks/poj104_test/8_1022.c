#define NUM_ITER 2368

#include <header.h>

int main_bench()
{
 int i,j,k,m,n,t=0;
 int *a,*b;
 my_scanf("%d %d",&n,&m);
 a=(int*)malloc(n*sizeof(int));
 b=(int*)malloc(m*sizeof(int));
 for(i=0;i<n;i++)
 my_scanf("%d",&a[i]);
 for(i=0;i<m;i++)
 my_scanf("%d",&b[i]);
 for(i=0;i<n;i++)
 for(j=0;j<n-i-1;j++)
 if(a[j]>a[j+1])
 {
                 t=a[j+1];
                 a[j+1]=a[j];
                 a[j]=t;
                 }
                 my_printf("%d",a[0]);
                 for(i=1;i<n;i++)
                 my_printf(" %d",a[i]);
                 for(i=0;i<m;i++)
                 for(j=0;j<m-i-1;j++)
                 if(b[j]>b[j+1])
                 {
                 t=b[j+1];
                 b[j+1]=b[j];
                 b[j]=t;
                 }
                 for(i=0;i<m;i++)
                 my_printf(" %d",b[i]);
}