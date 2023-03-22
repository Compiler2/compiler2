#define NUM_ITER 415519

#include <header.h>


int reverse(int num)
{
	int a[10],i,c=0,k=0,h=1;
	if(num>0)
	{
		for(i=1;i<=9;i++)
		{
			k=k+1;
			a[i]=num%10;
			num=num/10;
			if(num==0) break;
		}
		for(i=k;i>=1;i--)
		{
			c=c+a[i]*h;
			h=h*10;
		}
	}
	else { if(num==0) c=0;
		else {
			num=(-1)*num;
			for(i=1;i<=9;i++)
		    {
			   k=k+1;
			   a[i]=num%10;
			   num=num/10;
			   if(num==0) break;
		    }
		    for(i=k;i>=1;i--)
		    {
			   c=c+a[i]*h;
			   h=h*10;
		    }
		    c=(-1)*c;
		}
	}
	return c;
}

int main_bench()
{
    int reverse(int num);
    int a[7],n,i;
    
    for(i=1;i<=6;i++)
    {
    	my_scanf("%d",&a[i]);
    }
    my_printf("%d",reverse(a[1]));
    for(i=2;i<=6;i++)
    {
    	my_printf("\n%d",reverse(a[i]));
    }
    return 0;
}