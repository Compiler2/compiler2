#define NUM_ITER 491

#include <header.h>

int main_bench()
{
	int*p;
	int row,col,i,j;
	my_scanf("%d %d",&row,&col);
	p=(int*)malloc(row*col*sizeof(int));
	for(i=0;i<row*col;i++)
	{
		my_scanf("%d",p+i);
	}
	for(i=1;i<=col;i++)
	{
		j=i;
		while((col!=1)&&(j%col!=1)&&(j+col-1<row*col))
		{
			my_printf("%d\n",*(p+j-1));	
			j=j+col-1;
		}
		my_printf("%d\n",*(p+j-1));
	}
	for(i=2;i<=row;i++)
	{ 
		j=i*col;
		while((col!=1)&&(j%col!=1)&&(j+col-1<row*col))
		{
			my_printf("%d\n",*(p+j-1));
			j=j+col-1;
		}
		my_printf("%d\n",*(p+j-1));
	}
}
