#define NUM_ITER 580

#include <header.h>

int u[1000][1000];
int main_bench()
{
    int row,col,i,j,sum,k,m;
    my_scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
    {
	for(j=0;j<col;j++)
        {
	    my_scanf("%d",&u[i][j]);
	}
    }
    if(row>col)
    {
        m=col;
    }
    else 
    {
        m=row;
    }
	
    for(k=0;k<m;k++)
    {
        for(j=k;j<col-k;j++)
        {
	    my_printf("%d\n",u[k][j]);
        }
	if(k+1>=row-k)
        {				
            break;
	}
	
        for(i=k+1;i<row-k;i++)
        {
	    my_printf("%d\n",u[i][col-k-1]);
	}
	if(col-2-k<k)
        {
	    break;
	}

        for(j=col-2-k;j>=k;j--)
        {
	    my_printf("%d\n",u[row-k-1][j]);
	}
        if(row-2-k<=k)
        {
	    break;
	}

        for(i=row-2-k;i>k;i--)
        {
	    my_printf("%d\n",u[i][k]);
	}
				
    }
    return 0;	
}