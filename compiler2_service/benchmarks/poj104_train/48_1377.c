#define NUM_ITER 1235

#include <header.h>

main_bench()
{
	int num,day,i,j,k,p,q;
	my_scanf("%d %d",&num,&day);
	int min[11][11];
	int temp[11][11];
	for(i=0;i<11;i++)
	{
		for(j=0;j<11;j++) 
		min[i][j]=0;
	}	
	min[5][5]=num;
	for(k=1;k<=day;k++)
	{
	for(p=0;p<11;p++)
	{
		for(q=0;q<11;q++) 
		temp[p][q]=min[p][q];
	}	
	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		min[i][j]=2*temp[i][j]+temp[i+1][j]+temp[i][j+1]+temp[i-1][j]+temp[i][j-1]+temp[i+1][j+1]+temp[i-1][j+1]+temp[i-1][j-1]+temp[i+1][j-1];
	}
	}
    for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			if(j!=9)
			my_printf("%d ",min[i][j]);
			else my_printf("%d",min[i][j]);
		}
		my_printf("\n");
	}
}
