#define NUM_ITER 910207

#include <header.h>

int main_bench(){
	double a,j=0,m,k=0,l=0;
	int o=0,i;
	char b[500],c[500];			
	my_scanf("%lf%s%s",&a,b,c);
	for(i=0;b[i]!='\0';i++)
	{
		k++;
	}
		for(i=0;c[i]!='\0';i++)
	{
		l++;
	}
		for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==c[i])
		{
			j++;
		}
	}
	m=j/k;
		for(i=0;b[i]!='\0';i++)
		{
			if((b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')||(c[i]!='A'&&c[i]!='T'&&c[i]!='C'&&c[i]!='G'))
			{
				o++;
			}
	}
		if(o>0||k!=l)
		{
			my_printf("error");
		}
	else if(m>=a)
	{
		my_printf("yes");
	}
	else 
	{
		my_printf("no");
	}
	return 0;
}