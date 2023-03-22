#define NUM_ITER 1627242

#include <header.h>

int main_bench()
{   int hw(int(c));
	int m,n,i,j,t;
	t=0;
	
	my_scanf("%d %d",&m,&n );
	for(i=m;i<=n;i++)
	{
	for(j=2;j<i;j++)
	{
	if(i%j==0)
	break;
	if(j>=i-1)
	if (hw(i))
	{
      
	  t=t+1;
	  if(t==1)
		  my_printf("%d",i);
	  else
		  my_printf(",%d",i);
	}
	
	}


	}
	
	
	
	
	if(t==0)
		my_printf("no");
}


int hw(int(c))
{
	int x,y;
	x=0;
	y=c;
	do
	{x=10*x+y%10;
	y=y/10;
	}
	while(y>0);
	if (x==c)
		return(1);
	else
		return(0);
}