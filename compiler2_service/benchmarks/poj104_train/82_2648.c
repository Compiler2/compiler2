#define NUM_ITER 29443

#include <header.h>

int main_bench(){
	int n,sz[100][2],i,s=0,j,a=0,p=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
		   my_scanf("%d",&(sz[i][j]));
		}
	}
	for(i=0;i<n;i++)
	{
		if((sz[i][0]<=140)&&(sz[i][0]>=90)&&(sz[i][1]>=60)&&(sz[i][1]<=90))
		{
			a+=1;
			s+=1;
			if(p<s)
			{
			   p=s;
			   s=s;
			   a=a;
			}
			else
			{
				p=p;
				s=s;
				a=a;
			}
		}
		else
		{
			if(p<s)
			{
			   p=s;
			   s=0;
			   a=0;
			}
			else
			{
				p=p;
				s=0;
				a=0;
			}
		}
	}
	my_printf("%d",p);
	return 0;
}