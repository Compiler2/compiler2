#define NUM_ITER 25507

#include <header.h>

struct student
	{
		int num;
		int chinese;
		int math;
	};
	struct student stu[100000];
	int sum[100000];
int main_bench()
{
	
	int a,b,c,num1,num2,num3;
	int i,n;
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&stu[i].num,&stu[i].chinese,&stu[i].math);
	}
	for(i=0;i<n;i++)
	{
		sum[i]=stu[i].chinese+stu[i].math;
	}
	a=sum[0];
	num1=1;
	if(a<sum[1])
	{
		b=a;
		num2=num1;
		a=sum[1];
		num1=2;
	}
	else 
	{
		b=sum[1];
	    num2=2;
	}
    c=0;
	for(i=2;i<n;i++)
	{
        if(a<sum[i])
		{	
			c=b;
            num3=num2;
		    b=a;
			num2=num1;
			a=sum[i];
			num1=i+1;
		}
	    else
			if(b<sum[i])
			{
				c=b;
				num3=num2;
			    b=sum[i];
				num2=i+1;
			}
		    else
				if(c<sum[i])
				{
					c=sum[i];
				    num3=i+1;
				}
	}
	my_printf("%d %d\n",num1,a);
	my_printf("%d %d\n",num2,b);
	my_printf("%d %d\n",num3,c);
	return 0;
}

