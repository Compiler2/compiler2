#define NUM_ITER 442

#include <header.h>

int main_bench()
{
	int row,col;
	my_scanf("%d %d",&row,&col);
	int a[100][100]={0};
	int i,j;
	for(i=0;i<row;i++)
	{for(j=0;j<col;j++)my_scanf("%d",&a[i][j]);} 

	int step=0;
	i=0;
	j=0;
	int t;

	if(row*col>0){my_printf("%d",a[0][0]);step++;}

	while(step<row*col)            
	{
		
		if(i+1<0||j-1<0)       
		{
			
			
			t=i;
			i=j;
			j=t+1;             
			if(i<row&&j<col)   
			{my_printf("\n%d",a[i][j]);
			step++;}
		}
		else
		{
			i=i+1;
			j=j-1;
			if(i<row&&j<col)     
			{my_printf("\n%d",a[i][j]);
			step++;}
		}
		

	}
	
	return 0;
}