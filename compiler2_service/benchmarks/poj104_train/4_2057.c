#define NUM_ITER 539

#include <header.h>

int main_bench()
{
	int array[100][100],i,j;
	int row,col,s;
	my_scanf("%d%d\n",&row,&col);
             for(i=0;i<row;i++)
   		for(j=0;j<col;j++)
		my_scanf("%d",&array[i][j]);
      
		if(row<col)
		{  
			
          for(s=0;s<=row-1;s++)
				 for(i=0;i<=s;i++)
					 my_printf("%d\n",array[i][s-i]);
				 for(s=row;s<=col-1;s++)
					 for(i=0;i<=row-1;i++)
                         my_printf("%d\n",array[i][s-i]);

				 for(s=col;s<=row+col-2;s++)
				   for(j=col-1;j>=s-row+1;j--)
					   my_printf("%d\n",array[s-j][j]);
		}
		else if(row>col)
		{
			 for(s=0;s<=col-1;s++)
				 for(i=0;i<=s;i++)
					 my_printf("%d\n",array[i][s-i]);
				 for(s=col;s<=row-1;s++)
					 for(j=col-1;j>=0;j--)
                         my_printf("%d\n",array[s-j][j]);

				 for(s=row;s<=row+col-2;s++)
				   for(i=s+1-col;i<=row-1;i++)
					   my_printf("%d\n",array[i][s-i]);
		}
		else
		{
			for(s=0;s<=col-1;s++)
				 for(i=0;i<=s;i++)
					 my_printf("%d\n",array[i][s-i]);
            for(s=row;s<=row+col-2;s++)
 				   for(i=s+1-col;i<=row-1;i++)
					   my_printf("%d\n",array[i][s-i]);
		}

		return 0;
}
