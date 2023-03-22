#define NUM_ITER 4418

#include <header.h>


int main_bench()
{
	int n,i,j;
	int year[201];
	int month1[201];
	int month2[201];
	int huan[201];
	huan[201]=0;
	int days[201];

	my_scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&year[i],&month1[i],&month2[i]);	
	
		if (month1[i]>month2[i])
		{
			huan[i]=month1[i];
			month1[i]=month2[i];
			month2[i]=huan[i];
		}
		days[i]=0;
	}

	for (i=0;i<n;i++)
	{
		
		for(j=month1[i];j<month2[i];j++)
		{
			if(j==1||j==3||j==5||j==7||j==8||j==10)
			{
				days[i]+=31;
			}
			else if (j==4||j==6||j==9||j==11)
			{
				days[i]+=30;
			}
			else if(j==2)
			{
				if(year[i]%400==0||(year[i]%4==0&&year[i]%100!=0))
				{
					days[i]+=29;
				}
				else
				{
					days[i]+=28;
				}
			}
		}
		if (days[i]%7==0)
		{
			my_printf("YES\n");
		}
		else
		{
			my_printf("NO\n");
		}
	}


	
		

	return 0;
}


