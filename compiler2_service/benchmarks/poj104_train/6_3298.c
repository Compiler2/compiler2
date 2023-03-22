#include <header.h>

int main_bench()
{   int sum(int x,int y); 
    int k,i,m,n;
    my_scanf("%d",&k);
    for(i=1;i<=k;i++)
    {my_scanf("%d %d",&m,&n);
    
      my_printf("%d\n", sum(m,n));
     }
     return 0;
}
    int sum(int x,int y )
  {   int b[100][100];
      int sum=0,i,j;
      for(i=0;i<x;i++)
      for(j=0;j<y;j++)
     my_scanf("%d",&b[i][j]);
      for(i=0;i<x;i++)
     for(j=0;j<y;j++)
     if(i==0||i==(x-1)||j==0||j==(y-1))
      sum=sum+b[i][j];
      return(sum);
} 
     