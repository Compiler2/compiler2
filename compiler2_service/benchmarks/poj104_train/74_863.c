#define NUM_ITER 1209902

#include <header.h>

int main_bench()
{
	int a,b,i,j;
	int m,n,temp;
	int x,flag,y=0;
	my_scanf("%d %d",&m,&n);
	flag=0;
	for(i=m;i<=n;i++)    
	{
		a=i;
		b=0;
	    for(j=1;a!=0;j++)
		{
			temp=b;	
	        b=a%10;
		    b=10*temp+b;
			a=a/10;
		}
		if(b==i)
		{
			for(x=2;x<=b;x++)
			{
				if(b%x==0)break;
			}
			if(x==i)
			{
			    if(y>0)
			    my_printf(",");	
			    my_printf("%d",b);
			    flag=1;
				y++;
				
			}
		}
	}
	if(flag==0)
		my_printf("no\n");
}