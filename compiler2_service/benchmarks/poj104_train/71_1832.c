#define NUM_ITER 6521

#include <header.h>

int main_bench()
{
	int year[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	int n,i,month1,month2,nyear,sum=0,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		my_scanf("%d %d %d",&nyear,&month1,&month2);
		if(month1<month2)
		{
		if(nyear%4!=0||(nyear%100==0&&nyear%400!=0))
		{
			for(j=month1-1;j<month2-1;j++)
				sum=sum+year[0][j];

		}
		else
			for(j=month1-1;j<month2-1;j++)
				sum=sum+year[1][j];
		if(sum%7==0)
			my_printf("YES\n");
		else
			my_printf("NO\n");

	}
	else
	{
	    if(nyear%4!=0||(nyear%100==0&&nyear%400!=0))
		{
			for(j=month2-1;j<month1-1;j++)
				sum=sum+year[0][j];

		}
		else
			for(j=month2-1;j<month1-1;j++)
				sum=sum+year[1][j];
		if(sum%7==0)
			my_printf("YES\n");
		else
			my_printf("NO\n");
    }
	}


}