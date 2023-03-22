#include <header.h>

int main_bench()
{
	int col,row,a[100][100],i,j;
	my_scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++) my_scanf("%d",&a[i][j]);
	}
	i=0;j=0;

	for(;;)
	{
		
			my_printf("%d\n",a[i][j]);
				if(i+j==row+col-2) break;
		if(j==0)
		{
			j=i+j+1;i=0;
		}
		 else if(i>=row-1)
		 {j=i+j+1;i=0;}
		 else 	{i++;j--;}
	
	if(j>col-1) {i=i+j+1-col;j=j-(j+1-col);}
	if(i+j==row+col-2) break;

	}
	if(row+col>2)
	my_printf("%d\n",a[i][j]);
	
}