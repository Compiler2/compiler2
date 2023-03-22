#include <header.h>


int check(int (*p)[5],int n,int m)
{
	int i,t;
	if((n>=0)&&(n<=4)&&(m>=0)&&(m<=4))
	{
		for(i=0;i<=4;i++)
		{
			t=*(*(p+n)+i);
			*(*(p+n)+i)=*(*(p+m)+i);
			*(*(p+m)+i)=t; 
		}
		return 1;
	}
	else
		return 0;
}
int main_bench()
{
	int x,y,j,k,c;
	int a[5][5];
	for(j=0;j<5;j++)
		for(k=0;k<5;k++)
			my_scanf("%d",&a[j][k]);
	my_scanf("%d %d",&x,&y);
	c=check(a,x,y);
	if(c==1)
	{
		for(j=0;j<5;j++)
		{
		   for(k=0;k<4;k++)
			   my_printf("%d ",a[j][k]);
		my_printf("%d",a[j][4]);
		my_printf("\n");
		}
	}
	else if(c==0)
		my_printf("error");
	
	return 0;
}

	






