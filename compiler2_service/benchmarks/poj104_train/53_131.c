#define NUM_ITER 9827

#include <header.h>

int main_bench()
{
int n,a[100],b[100];
int i,j,*pa,*pb,N;
my_scanf("%d",&n);
for(i=0;i<=n-1;i++) 
my_scanf("%d",&a[i]);
pa=a;
for(i=0;i<=n-1;i++)
{
         pb=&a[i+1];
         for(j=0;j<=n-2-i;j++)
         {
                 if((*pb)==(*pa)) (*pb)=0;
                 pb++;
         }
         pa++;
}
pa=&a[0];
pb=&b[0];
N=0;
for(i=0;i<=n-1;i++)
{
         if((*pa)!=0)
         {
                 *pb=*pa;
                 pb++;
                 N++;
         }
         pa++;
}
for(i=0;i<=N-2;i++)
my_printf("%d,",b[i]);
my_printf("%d\n",b[i]);
return 0;
}