#include <header.h>

void Change(int a[5][5],int b,int c);

int main_bench()
{
	int i,j,matrix[5][5],p,q;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&matrix[i][j]);
	my_scanf("%d%d",&p,&q);

	if(!(p>=0&&p<5&&q>=0&&q<5))
		my_printf("error");
	else
	{
		Change(matrix,p,q);
		for(i=0;i<5;i++)
		{
	    	for(j=0;j<5;j++)
			{
				if(j==0)
		        	my_printf("%d",matrix[i][j]);
				else
					my_printf(" %d",matrix[i][j]);
			}
		    my_printf("\n");
		}
	}
}
    void Change(int a[5][5],int b,int c)
	{
		int t,temp;
		for(t=0;t<5;t++)
		{
			temp=a[b][t];
			a[b][t]=a[c][t];
			a[c][t]=temp;
		}
	}