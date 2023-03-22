#define NUM_ITER 810480

#include <header.h>


int main_bench()
{
	double bill;
	my_scanf("%lf",&bill);

	char s1[500]={0};
	char s2[500]={0};
	my_scanf("%s",s1);
	my_scanf("%s",s2);

	int lens1,lens2,flag;
	flag=0;
	lens1=strlen(s1);
	lens2=strlen(s2);
	if(lens1!=lens2) 
	{
		my_printf("error");
		flag=1;
	}

	int i;
	if(flag==0)
	{
		for(i=0;i<lens1;i++)
		{
			if(s1[i]!='A')
			{
				if(s1[i]!='T')
				{
					if(s1[i]!='C')
					{
						if(s1[i]!='G')
						{
							my_printf("error");
							flag=1;
							break;
						}
					}
				}
			}
		}
	}

	if(flag==0)
	{
		for(i=0;i<lens2;i++)
		{
			if(s2[i]!='A')
			{
				if(s2[i]!='T')
				{
					if(s2[i]!='C')
					{
						if(s2[i]!='G')
						{
							my_printf("error");
							flag=1;
							break;
						}
					}
				}
			}
		}
	}

	double num,avg;
	num=0;
	if(flag==0)
	{
		for(i=0;i<lens1;i++)
		{
			if(s1[i]==s2[i])
			{
				num++;
			}
		}
		avg=num/(double)lens1;
		if(avg>bill)
		{
			my_printf("yes");
		}
		if(avg<=bill)
		{
			my_printf("no");
		}
	}

	return 0;
}