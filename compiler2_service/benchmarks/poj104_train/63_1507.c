#define NUM_ITER 46

#include <header.h>


main_bench()
{int a[100][100]={0},b[100][100]={0},c[100][100]={0},i,o,q,j,k,J,K,v,w,m,p,n;
 my_scanf("%d %d",&m,&p);
 for(j=0;j<m;j++)
  {for(k=0;k<p;k++)
     my_scanf("%d",&a[j][k]);}
     
 my_scanf("%d %d",&p,&n) ;
 for(J=0;J<p;J++)
  {for(K=0;K<n;K++)
     my_scanf("%d",&b[J][K]);}
for(i=0;i<m;i++)
{for(o=0;o<n;o++)
 {for(q=0;q<p;q++)
 c[i][o]=c[i][o]+a[i][q]*b[q][o];}}   
 for(v=0;v<m;v++)
 {for(w=0;w<n-1;w++)
   my_printf("%d ",c[v][w]);
  if(w==n-1)
  my_printf("%d\n",c[v][w]);}
    
      }