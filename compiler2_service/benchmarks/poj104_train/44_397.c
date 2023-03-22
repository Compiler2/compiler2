#define NUM_ITER 440229

#include <header.h>

int main_bench()
{
int n,i;
void reverse(int num);

for(i=0;i<6;i++)
{
	my_scanf("%d",&n);
	reverse(n);
}

return 0;
}
void reverse(int num)
{
	int i,result,k;	

    if(num<0)
	{
		my_printf("-");
		num=num*-1;
		k=0;
			while(num/10!=0)
			{
				if(num%10!=0)
				{
					k=1;
				}
				if(k!=0)
				{
				my_printf("%d",num%10);
				}	num=num/10;
			}
			if(num<10&&num>0)
			{my_printf("%d\n",num);}
	}else if(num>0)
	{
       k=0;
		while(num/10!=0)
			{
			if(num%10!=0)
				{
					k=1;
				}
				if(k!=0)
				{
				my_printf("%d",num%10);
				
				}num=num/10;
			}
		if(num<10&&num>0)
			{my_printf("%d\n",num);}
	
	}else if(num==0)
	{
		my_printf("0");
	}

}
