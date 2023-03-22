#define NUM_ITER 1425177

#include <header.h>

int main_bench()
{
	int m, n,a,i,j,temp,x,y;
	my_scanf("%d",&m);
	my_scanf("%d",&n);
	for(j=0;m<=n;m++)
	{
		if(m==1)
			continue;
		for(i=2;i<m;i++)
		{
			a=m%i;
	        if(a==0)
				break;
		}                   
	    if(a!=0)            
		{
			temp=m;
			y=0;
			while(temp>0)
			{	
				x=temp%10;
				y=y*10+x;
				temp=temp/10;
			}
			if(m==y)          
			{   
				j=j+1;        
				if(j==1)
					my_printf("%d",m);
			    else
					my_printf(",%d",m);
			}
		}
	}
	if(j==0)
		my_printf("no");
}