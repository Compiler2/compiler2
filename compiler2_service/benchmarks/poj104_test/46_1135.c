#define NUM_ITER 562

#include <header.h>


int main_bench()
{
    int num[100][100];
	int row,col;
	my_scanf("%d%d",&row,&col);
	int i,j;
	int a=0,b=row-1,c=0,d=col-1;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
            my_scanf("%d",&num[i][j]);
		}
	}
	do
	{
	  
        i=a;
		for(j=c;j<=d&&a<=b;j++)
		{
		    my_printf("%d\n",num[i][j]);
		}
		a=a+1;
        j=d;
        for(i=a;i<=b&&c<=d;i++)
		{
			my_printf("%d\n",num[i][j]);
		}
		d=d-1;
		i=b;
		for(j=d;j>=c&&a<=b;j--)
		{
			my_printf("%d\n",num[i][j]);
		}
		b=b-1;
		j=c;
		for(i=b;i>=a&&c<=d;i--)
		{
			my_printf("%d\n",num[i][j]);
		}
		c=c+1;
		
	}
	while(a<=b||c<=d);
	return 0;
}   
    

