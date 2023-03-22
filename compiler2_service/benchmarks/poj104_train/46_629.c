#define NUM_ITER 587

#include <header.h>

int main_bench()
{
	int a[100][100]={0},row,col,i=0,j=0,t=0,s=0;
	my_scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			my_scanf("%d",&a[i][j]);
	}
	i=0;
	j=0;
	do
	{
		for(j=t;j<col-t;j++)
			my_printf("%d\n",a[i][j]);
   		j-=1;
		if(2*s+1==row) break;
        for(i=s+1;i<row-s;i++)
			my_printf("%d\n",a[i][j]);
		i-=1;
	    t+=1;
		if(col==t+s) break;
	    for(j=col-t-1;j>=s;j--)
			my_printf("%d\n",a[i][j]);
		j+=1;
	    s+=1;
		if(row==s+t) break;
	    for(i=row-s-1;i>=t;i--)
			my_printf("%d\n",a[i][j]);
		i+=1;
		if(col==2*t) break;
	}
	while(t!=col && s!=row);
	return 0;
}

