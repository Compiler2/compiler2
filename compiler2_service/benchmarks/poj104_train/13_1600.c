#include <header.h>

int main_bench()
{
    int n,i,j,flag=0;
    int *p;
    my_scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    my_scanf("%d",&p[0]);
    my_printf("%d",p[0]);
    for(i=1;i<=n-1;i++)
    {
         my_scanf("%d",&p[i]);
         for(j=0;j<i;j++)
         {
              if(p[i]==p[j])
              flag=1;
         }
         if(flag==0)
         my_printf(" %d",p[i]);
         flag=0;
    }
    return 0;
}
     
     
