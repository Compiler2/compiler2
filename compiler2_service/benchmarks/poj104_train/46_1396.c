#include <header.h>

int main_bench()
{
	int a[105][105];
	int row,col,i,j,t=0,temp=0,count=0;
	my_scanf("%d%d",&row,&col);
	int sum=row*col;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			my_scanf("%d",&a[i][j]);
	while(1)
	{
		for(i=t;i<col-t;i++)
		{
			my_printf("%d\n",a[t][i]);
			count++;
		}
		if(count==sum)
			break;
		for (i=t+1;i<row-t;i++)
		{
			my_printf("%d\n",a[i][col-t-1]);
			count++;
		}
		if(count==sum)
			break;
		for (i=col-2-t;i>=t;i--)
		{
			my_printf("%d\n",a[row-t-1][i]);
			count++;
		}
        if(count==sum)
			break;
		for (i=row-2-t;i>t;i--)
		{
			my_printf("%d\n",a[i][t]);
            count++;
		}
        if(count==sum)
			break;
		t++;
	}
	return 0;
}


