#define NUM_ITER 984600

#include <header.h>

int huiwen(int a)
{
	int b=0;
	int i=0;
	int l=1;
	int c=1;
	for(l=0;l<12;l++)
	{
		if((a/c)==0)
		break;		
		c=c*10;
	}
	c=a;
	for(i=1;i<=l;i++)
	{
		b=b*10;
		b=b+(c%(10));
		c=(c/10);		
	}
	if(a==b)
	return 1;
	else
	return 0;	
}
int ss(int a)
{
	int i=2;
    for(i=2;i<=(a/2);i++)
    {
        if((a%i)==0)
        return 0;
    }
    return 1;   
}
int main_bench()
{
	int m,n;
	my_scanf("%d %d",&m,&n);
	int i=0,k=0;
	for(i=m;i<=n;i++)
	{
		if(i!=1)
		if(huiwen(i))
		{
			if(ss(i))
			{
				k=k+1;			
				if(k!=1)
				my_printf(",%d",i);
				else
				my_printf("%d",i);
			}
		}	
	}
	if(k==0)
	my_printf("no");
	return 0;
}