#include <header.h>

main_bench()
{
 int s,y,i,j,k,n,m,t,q;
 my_scanf("%d",&t);
 
 
 for(q=0;q<t;q++)
 { s=0;
 y=0;
 my_scanf("%d %d",&m,&n);
 int a[m][n];
    for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
     my_scanf("%d",&a[i][j]);
    }                
  }
  for(i=0;i<n;i++)
  {
   s=a[0][i]+a[m-1][i]+s; 
  }
  for(i=1;i<m-1;i++)
  {
   y=a[i][0]+a[i][n-1]+y; 
  }
  
   my_printf("%d\n",(s+y));              
 }
 getchar();
 getchar();
 getchar(); 
   getchar();
 getchar();
 getchar();   
}