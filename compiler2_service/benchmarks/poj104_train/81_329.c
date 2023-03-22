#define NUM_ITER 232827

#include <header.h>

int main_bench()
{
	int m,n,i,j,t,a[5][5];
	int f(int m,int n);
    for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&m,&n);
	if(f(m,n)==0)
		my_printf("error");
		else
		{
		     for(i=0;i<5;i++)
			 {
		    	t=a[n][i];
			    a[n][i]=a[m][i];
			    a[m][i]=t;
			 }
	            for(i=0;i<5;i++)
				{
	          	    my_printf("%d",a[i][0]);
		            for(j=1;j<5;j++)
					{			
		    	       my_printf(" %d",a[i][j]);
					}
			          my_printf("\n");
				}
		}
}
int f(int m,int n)
{
	int s;
	if(m<5&&n<5)
			s=1;
	else
			s=0;
	return(s);
}


