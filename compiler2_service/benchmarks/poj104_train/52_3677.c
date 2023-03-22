#define NUM_ITER 55557

#include <header.h>

int main_bench()
{int a[100],m,n,i,j,t=0;
my_scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
my_scanf("%d",&a[i]);
for(j=n-m;j<n;j++)
{if(t==0){my_printf("%d",a[j]);t=t+1;}
else my_printf(" %d",a[j]);}
for(j=0;j<n-m;j++)
my_printf(" %d",a[j]);}