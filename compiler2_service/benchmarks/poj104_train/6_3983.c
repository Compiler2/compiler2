#define NUM_ITER 30

#include <header.h>


int a[100][100];
int main_bench()
{
  int k,m,n,sum,i,j;
  my_scanf("%d",&k);
  while(k--)
  {
    memset(a,0,sizeof(a));
    my_scanf("%d%d",&m,&n);
    sum=0;
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
       my_scanf("%d",&a[i][j]);
       if(i==0||i==m-1||j==0||j==n-1)
       sum+=a[i][j];
    }
    
    my_printf("%d\n",sum);
}
     return 0;
}
