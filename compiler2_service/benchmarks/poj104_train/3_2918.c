#define NUM_ITER 55453

#include <header.h>

int read();
int find();
int n,k,a[1000],m;
int main_bench()
{
    read();
    m=find();
    if (m==0)
    my_printf("no");
    else my_printf("yes");
    return 0;
}
int read()
{
    int i;
    my_scanf("%d%d",&n,&k);
    for (i=1;i<=n;i++)
    my_scanf("%d",&a[i]);
    return 0;
}
int find()
{
    int i,j;
    for (i=1;i<=n-1;i++)
       for (j=i+1;j<=n;j++)
       { if (a[i]+a[j]==k)
         { return 1;
           break;
          }
        }
     return 0;
}