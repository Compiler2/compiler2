#include <header.h>

int main_bench()
{
 int zhh(int n,int m);
 int a[5][5],i,j,m,n,c;
 for(i=0;i<=4;i++)
 {
  for(j=0;j<=4;j++)
   my_scanf("%d",&a[i][j]);
 }
 my_scanf("%d %d",&n,&m);
 if(zhh(n,m)==0)
  my_printf("error");
 else  
 {	 for(i=0;i<=4;i++)
 {
   if(i==m)i=n;
  else if(i==n)i=m;
  for(j=0;j<=4;j++)
  {
	  if(j<4)
  my_printf ("%d ",a[i][j]);
	  else my_printf("%d",a[i][j]);
  if(j==4)my_printf("\n");
  }
  if(i==n)i=m;
  else if(i==m)i=n;
 }
}
}


int zhh(int n,int m)
{
 if(n>4||m>4)
  return(0);
 else 
  return(1);
 }
