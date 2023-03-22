#define NUM_ITER 37152

#include <header.h>

int main_bench(){
	int n,a,b,i,k,h;
	k=0;
	h=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a,&b);
		if(a==b)
		{
			k=k;
			h=h;
		}
		if(a==0&&b==1)
		{
			k=k+1;
		}
		if(a==1&&b==2)
		{
			k=k+1;
		}
		if(a==2&&b==0)
		{
			k=k+1;
		}
		if(a==0&&b==2)
		{
			h=h+1;
		}
		if(a==2&&b==1)
		{
			h=h+1;
		}
		if(a==1&&b==0)
		{
			h=h+1;
		}
	}
	if(k>h){my_printf("A");}
	if(k<h){my_printf("B");}
	if(k==h){my_printf("Tie");}
	return 0;
}