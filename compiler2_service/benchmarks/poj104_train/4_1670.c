#include <header.h>



int main_bench()
{
	int i,j,k,row,col,*p[100];
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
		p[i]=(int *)malloc(100*sizeof(int));
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			my_scanf("%d",p[i]+j);
	for(k=0;k<=row+col-2;k++)
		for(i=0,j=k-1;i<=row-1;i++,j--)
			if(i<=row-1&&j>=0&&j<=col-1&&i>=0)
				my_printf("%d\n",*(p[i]+j));
	my_printf("%d\n",*(p[row-1]+col-1));

}