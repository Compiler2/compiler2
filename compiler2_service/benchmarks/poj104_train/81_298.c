#define NUM_ITER 233697

#include <header.h>

main_bench()
{
	int a[5][5],b[5];
	int i,j,m,n;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&m,&n);
    if(m>4||n>4)
	{		
		my_printf("error");
		return(0);
	}
	else
	{
		for(i=0;i<5;i++)
	       b[i]=a[m][i];
		for(i=0;i<5;i++)
	       a[m][i]=a[n][i];
		for(i=0;i<5;i++)
	       a[n][i]=b[i];
        for(i=0;i<5;i++)
		{
		    for(j=0;j<5;j++)
			{
			   if(j==4)
				 my_printf("%d\n",a[i][j]);
			   else 
				 my_printf("%d ",a[i][j]);
			} 
		}
		return(1);
	}
}