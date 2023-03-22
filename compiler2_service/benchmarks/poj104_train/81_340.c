#define NUM_ITER 219723

#include <header.h>

int change(int a[5][5],int n,int m)
{
	int c,j,t;
	if(n>=0&&n<5&&m>=0&&m<5)
	{
		c=1;
	    for(j=0;j<5;j++)
	    {
	    	t=a[n][j];
	    	a[n][j]=a[m][j];
		    a[m][j]=t;
	    }
	}
	else
	c=0;
	return(c);
}
int main_bench()
{
	int s[5][5];
	int i,j,x,y;
    for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
        {
			my_scanf("%d ",&s[i][j]);
        }
        my_scanf("%d",&s[i][4]);
	}
	my_scanf("%d%d",&x,&y);
	if(change(s,x,y)==1)
	{
		for(i=0;i<5;i++)
	    {
		    for(j=0;j<4;j++)
            {
			    my_printf("%d ",s[i][j]);
            }
            my_printf("%d",s[i][4]);
            my_printf("\n");
	    }
	}
	else
    my_printf("error");
}
