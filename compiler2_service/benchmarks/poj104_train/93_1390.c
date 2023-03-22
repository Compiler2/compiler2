#include <header.h>

int main_bench()
{
	int n,i,k=0,t[3]={3,5,7},f=0;
	my_scanf("%d",&n);
	
for(i=0;i<3;i++)	
{	if(n%t[i]==0)
		
	k=k+1;}
	if(k==0)
		my_printf("n");
	else
	{
	for(i=0;i<3;i++)
	{
		if(n%t[i]==0)
		{	my_printf("%d",t[i]);
		f++;
		
		if(f<k&&f>=1)
			my_printf(" ");}
		
	}}

	return 0;
}
 
