#define NUM_ITER 496

#include <header.h>

int main_bench()
{
   int n,m[100][100],i,j,a=0,b=0,c=0,d=0,x,y,s;
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
     for(j=0;j<n;j++)
	   my_scanf("%d",&m[i][j]);
   for(i=0;i<n;i++)
     for(j=0;j<n;j++)
	   {
	           if(m[i][j]==0&&m[i][j-1]==255&&m[i][j+1]==0)
		    a=j;
		  if(j==n-1&&m[i][j]==0)
		    b=j;
		  else if(j!=n-1&&m[i][j]==0&&m[i][j+1]==255&&m[i][j-1]==0)
		    b=j;
		  if(i==0&&m[i][j]==0)
		    c=i;
		  else if(i!=0&&m[i][j]==0&&m[i-1][j]==255&&m[i+1][j]==0)
		    c=i;
		  if(i==n-1&&m[i][j]==0)
		    d=i;
		  else if(i!=n-1&&m[i][j]==0&&m[i+1][j]==255&&m[i-1][j]==0)
		    d=i;
		}

  x=b-a-1;
  y=d-c-1;
  s=x*y;
  my_printf("%d",s);
}


	
