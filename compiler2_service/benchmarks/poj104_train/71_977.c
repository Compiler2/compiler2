#define NUM_ITER 3961

#include <header.h>

int main_bench()
{
	int n,i,j;
	my_scanf("%d",&n);
	int a,b,c,sum;
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&a,&b,&c);
		if((a%4==0&&a%100!=0)||a%400==0)
		{
			if(b<c)
			{
				for(j=b,sum=0;j<c;j++)
				{
					if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
						sum=sum+31;
					else if(j==4||j==6||j==9||j==11)
						sum=sum+30;
					else
						sum=sum+29;
				}
				if(sum%7==0)
					my_printf("YES\n");
				else
				    my_printf("NO\n");
			}
			else if(b>c)
			{
				for(j=c,sum=0;j<b;j++)
				{
					if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
						sum=sum+31;
					else if(j==4||j==6||j==9||j==11)
						sum=sum+30;
					else
						sum=sum+29;
				}
				if(sum%7==0)
					my_printf("YES\n");
				else
				    my_printf("NO\n");
			}
			else if(b==c)
				my_printf("YES\n");
		}
		else 
		{
            if(b<c)
			{
				for(j=b,sum=0;j<c;j++)
				{
					if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
						sum=sum+31;
					else if(j==4||j==6||j==9||j==11)
						sum=sum+30;
					else
						sum=sum+28;
				}
				if(sum%7==0)
					my_printf("YES\n");
                else
				    my_printf("NO\n");
			}
            else if(b>c)
			{
				for(j=c,sum=0;j<b;j++)
				{
					if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
						sum=sum+31;
					else if(j==4||j==6||j==9||j==11)
						sum=sum+30;
					else
						sum=sum+28;
				}
				if(sum%7==0)
					my_printf("YES\n");
                else
				    my_printf("NO\n");
			}
			else if(b==c)
				my_printf("YES\n");
		}
	}
	return 0;
}
