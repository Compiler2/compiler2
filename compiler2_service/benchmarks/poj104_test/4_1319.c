#define NUM_ITER 542

#include <header.h>

int main_bench()
{
	int i,j,k,row,col;
	int sz[100][100];
	my_scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		my_scanf("\n%d",&sz[i][0]);
		for(j=1;j<col;j++)
		{
	    	my_scanf("%d ",&sz[i][j]);
		}
	}
	if(col>=row)
	{
       for(i=0;i<row;i++)
	   {
		   for(j=0,k=i;j<=i;j++,k--)
		   {
			   my_printf("%d\n",sz[j][k]);
		   }
	   }
	   for(i=row;i<col;i++)
	   {
		   for(j=0,k=i;j<row;j++,k--)
		   {
			   my_printf("%d\n",sz[j][k]);
		   }
	   }
	   for(i=1;i<row;i++)
	   {
		   for(j=i,k=col-1;j<row;j++,k--)
		   {
			   my_printf("%d\n",sz[j][k]);
		   }
	   }
	}
    if(col<row)
	{
       for(i=0;i<col;i++)
	   {
		   for(j=0,k=i;j<=i;j++,k--)
		   {
			   my_printf("%d\n",sz[j][k]);
		   }
	   }
	   for(i=1;i<=row-col;i++)
	   {
		   for(j=i,k=col-1;k>=0;j++,k--)
		   {
			   my_printf("%d\n",sz[j][k]);
		   }
	   }
	   for(i=row-col+1;i<row;i++)
	   {
		   for(j=i,k=col-1;j<row;j++,k--)
		   {
			   my_printf("%d\n",sz[j][k]);
		   }
	   }
	}
	return 0;
}