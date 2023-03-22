#include <header.h>

int main_bench()
{
	int a[5][5],n,m,i,j,t,flag;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
    my_scanf("%d %d",&m,&n);
	if(m>=0&&m<=4&&n>=0&&n<=4)
		flag=1;
	else
		flag=0;
	if(flag==0)
		my_printf("error");
	else
	{
		for(j=0;j<5;j++)
		{
			t=a[m][j];
            a[m][j]=a[n][j];
			a[n][j]=t;
		}
	    for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			if(i==4&&j==4)
				my_printf("%d",a[4][4]);
			else
				if(j==4)
				    my_printf("%d\n",a[i][j]);
				else
					my_printf("%d ",a[i][j]);
		}
	}
    return 0;
}
