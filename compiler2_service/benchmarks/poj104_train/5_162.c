#include <header.h>

int main_bench()
{	
	double n;
	my_scanf("%lf",&n);
	char a[1000],b[1000];
	int i,j,k=0,flag=0;
	for(j=0;1;j++)
	{
		my_scanf("%c",&a[j]);
		if(a[j]=='\n'&&j!=0)
		{j=j-1;
		break;}
	}

	for(i=1;1;i++)
	{
		my_scanf("%c",&b[i]);
		if(b[i]=='\n')
		{	i=i-1;
		break;}
		
	}
	
	if(i!=j)
		flag=1;
	else
	{
		for(i=1;i<=j;i++)
		{
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
			{
				flag=1;
				break;
			}
			else if(a[i]==b[i])
			{
				k=k+1;
			
			}
		}
	}
	
	if(flag==1)
		my_printf("error");
	else{if(1.0*k/j>n)
		my_printf("yes");
	else my_printf("no");}
	
	



	

	



	return 0;


}