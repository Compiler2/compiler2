#define NUM_ITER 29

#include <header.h>

main_bench()
{
   int a[100][100],b[100][100],c[100][100]={0};
   int d,e,f,g,i,j,k,m,n,p,q,r,s;
   my_scanf("%d %d",&d,&e);
   for(i=0;i<=d-1;i++)
   {
     for(j=0;j<=e-1;j++)
     my_scanf("%d",&a[i][j]);
   }
   my_scanf("%d %d",&f,&g);
   for(k=0;k<=f-1;k++)
   {
     for(m=0;m<=g-1;m++)
     my_scanf("%d",&b[k][m]);
   }
   for(n=0;n<=d-1;n++)
   {
      for(p=0;p<=g-1;p++)
      {
          for(q=0;q<=e-1;q++)
           {
            if(q==0)
            c[n][p]=a[n][q]*b[q][p];
            else               
            c[n][p]=c[n][p]+a[n][q]*b[q][p];
           }
      } 
   }
   for(r=0;r<=d-1;r++)
   {
      for(s=0;s<=g-1;s++)
      {
      if(s!=g-1)
      my_printf("%d ",c[r][s]);
      else if(s==g-1&&r!=d-1)
      my_printf("%d\n",c[r][s]);
      else if(s==g-1&&r==d-1)
      my_printf("%d",c[r][s]);
      }
   }
}