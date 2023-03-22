#define NUM_ITER 26

#include <header.h>

int main_bench()
{
    int m,n,k,i,j,sum;
    int a[100][100];
    my_scanf("%d",&k);
    while(k--)
    {
              sum=0;
              my_scanf("%d %d",&m,&n);
              for(i=0;i<m;i++)
              {
                              for(j=0;j<n;j++)        
                              {    
                              my_scanf("%d",&a[i][j]);
                              if(i==0||i==m-1)
                              continue;
                              if(j==0||j==n-1)
                              continue;
                              a[i][j]=0;
                              }
              }
              
              
              for(i=0;i<m;i++)for(j=0;j<n;j++)  sum+=a[i][j];  
              
              my_printf("%d\n",sum);
    }

return 0;
}
