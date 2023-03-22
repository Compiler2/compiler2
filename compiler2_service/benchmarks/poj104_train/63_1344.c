#define NUM_ITER 32

#include <header.h>


int main_bench()
{
  int m,n,p,q,sum=0,i,j,k,ii,jj;
  int a[100][100],b[100][100],c[100][100];
  my_scanf("%d %d",&m,&n);
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)my_scanf("%d",&a[i][j]);                
  }
  my_scanf("%d %d",&p,&q);
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)my_scanf("%d",&b[i][j]);            
  }
  
  for(i=0;i<m;i++)
  {
    for(j=0;j<q;j++)
    {
       for(ii=0;ii<n;ii++)
       {
         sum=sum+(a[i][ii]*b[ii][j]);                   
       }              
       c[i][j]=sum;
       sum=0; 
    }                
  }
  
  for(i=0;i<m;i++)
  {
    for(j=0;j<q-1;j++)
    {
      my_printf("%d ",c[i][j]);                  
    }
    my_printf("%d\n",c[i][q-1]);                  
  }
  
 
  	
  return 0;
}
