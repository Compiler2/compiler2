#define NUM_ITER 233399

#include <header.h>

int main_bench()
{
    int a[5][5];
    int m,n,i,j,temp;
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    my_scanf("%d",&a[i][j]);
    my_scanf("%d %d",&n,&m);
    if(m>4||n>4)
    my_printf("error");
    else
    {
        for(j=0;j<5;j++)
        {
          temp=a[m][j];
          a[m][j]=a[n][j];
          a[n][j]=temp;
          }
    for(i=0;i<=4;i++)
    {for(j=0;j<=3;j++)
     my_printf("%d ",a[i][j]);
     my_printf("%d\n",a[i][4]);
     }
     }
}
