#define NUM_ITER 232763

#include <header.h>

int main_bench()
{
	int change(int a[5][5],int m,int n);
	int a[5][5];
    int i,j,t,m,n;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
		my_scanf("%d %d",&m,&n);
		t=change(a,m,n);
       if(t==1)
		  	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			if(j==4)
			my_printf("%d\n",a[i][j]);
			else
				my_printf("%d ",a[i][j]);
		}
		if(t==0)
			my_printf("error");
}	

int change(int a[5][5],int m,int n)
{
	int i,c,p;
	if(m>=5||n>=5)
		c=0;
	else
	{
		for(i=0;i<5;i++)
		{ 
			p=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=p;
		}
			c=1;
	}
	return(c);
}

	