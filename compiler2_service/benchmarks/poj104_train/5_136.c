#include <header.h>



int main_bench()
{
	char a[1000],b[1000];
	double n;
	int i,j,k;
	double sum=0;
	my_scanf("%lf",&n);
	my_scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b))
	{
		my_printf("error");
	}
	else 
	{
		for(i=0;i<strlen(a);i++)
		{
			if(((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G'))||((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G')))
			{my_printf("error");
			return 0;}
		}
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]==b[i])
			{
				sum+=1;
			}
		}
		if((sum/strlen(a))>n)
		{
			my_printf("yes");
		}
		else {
			my_printf("no");
		}
	}


	


	
	
	
	

	return 0;
}
