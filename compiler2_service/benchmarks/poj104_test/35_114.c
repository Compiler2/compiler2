#include <header.h>

int main_bench()
{
  int a[300][300],i,j,m,n,max,maxi=0,maxj=0,l=1,s=0;
  my_scanf("%d,%d",&m,&n);
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  my_scanf("%d",&a[i][j]);
  for(i=0;i<m;i++)
  {  max=a[i][0];
     for(j=0;j<n;j++)
      if(max<a[i][j])
	    {max=a[i][j];
	     maxi=i;
	     maxj=j;
        }
     for(i=0;i<m;i++)
	  if(max>a[i][maxj])
	     l=0;
     if(l==1){my_printf("%d+%d",maxi,maxj);s++;}  
   }
   if(s==0)my_printf("No");
}