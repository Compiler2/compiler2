#include <header.h>

int main_bench(){
	int i,c=0;
	double n,x=0,y=0;
	char a[600],b[600];
	my_scanf("%lf",&n);
	
		my_scanf("%s",a);
	
		my_scanf("%s",b);
	
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T'))
		{
			my_printf("error");
			c=1;
			break;
		}
		else
		{
			if(a[i]==b[i])
			{
			   x++;
			}
		}
		y++;
		
	}
	if(c==0)
	{
	if(b[i]!='\0')
	{
		my_printf("error");
		c=1;
	}
	}
	
	if(c==0)
	{
		if((x/y)>n)
		{
			my_printf("yes");
		}
		else
		{
			my_printf("no");
		}
	}

	return 0;
}
