#include <header.h>

int main_bench(){
	int n,i,a,b,k=0;
	char s[8];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d",&a,&b);
		if(a==0)
		{
			if(b==1)
			{
				k++;
			}
			if(b==2)
			{
				k--;
			}
		}
		if(a==1)
		{
			if(b==0)
			{
				k--;
			}
			if(b==2)
			{
				k++;
			}
		}
		if(a==2)
		{
			if(b==0)
			{
				k++;
			}
			if(b==1)
			{
				k--;
			}
		}
	}
	if(k>0)
	{
		my_printf("A");
	}
	else if(k==0)
	{
		my_printf("Tie");
	}
	else if(k<0)
	{
		my_printf("B");
	}
	return 0;
}