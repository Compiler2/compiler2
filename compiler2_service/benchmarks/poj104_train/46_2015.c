#define NUM_ITER 585

#include <header.h>


int main_bench()
{
	int row,col,k=1,l=0,i,j;
	my_scanf("%d %d",&row,&col);
	int sz[100][100];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	if(row==1&&col==1)
		my_printf("%d",sz[0][0]);
	else{
		for(i=0;i<row*col;)
		{
				for(j=l;j<col-l;j++)
				{
					my_printf("%d\n",sz[l][j]);	
					i++;if(i==row*col) break;
				}
			if(i==row*col) break;
				for(j=l+1;j<row-1-l;j++)
				{
					my_printf("%d\n",sz[j][col-1-l]);
					i++;if(i==row*col) break;
				}  if(i==row*col) break;
				for(j=col-1-l;j>=l;j--)
				{
					my_printf("%d\n",sz[row-1-l][j]);
					i++;if(i==row*col) break;
				}  if(i==row*col) break;
				for(j=row-2-l;j>l;j--)
				{
					my_printf("%d\n",sz[j][l]);
					i++;if(i==row*col) break;
				}  if(i==row*col) break;
					l++;

		}
	}
	return 0;
}
