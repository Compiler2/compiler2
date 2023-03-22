#include <header.h>

int main_bench()
{
	int r,c,i,j,s;
	my_scanf ("%d%d",&r,&c);
	int x[100][100];
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
		my_scanf ("%d",&x[i][j]);
		
		}
	}
    s=0;
	while (s<=r+c-2)
	{
	 for (i=0;i<r;i++)
	 {
	  for (j=0;j<c;j++)
	  {
	  if (i+j==s)
	  {
	  my_printf ("%d\n",x[i][j]);
	  
	  }
	  
	  
	  }
	 
	 
	 }
	
	s++;
	}
   
	
	
	
	
	return 0;
}
