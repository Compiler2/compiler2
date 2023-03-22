#define NUM_ITER 883925

#include <header.h>

int main_bench()
{
int i,n,m,j;
double x,s;
char a[101],b[101];
j=0;
my_scanf("%lf",&x);
	
my_scanf("%s%s",a,b);
	n=strlen(a);
	m=strlen(b);
	s=0;
	for(i=0;i<n;i++)
	{ 
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')
		{
			j++;
			break;
		}
	}

if(n!=m||j!=0)
{
	my_printf("error");
}else
{
	for(i=0;i<n;i++)
	{
		if(b[i]==a[i])
		{
			s++;
		}
	}
    s=s/n;
	if(s>x)
	{
	 my_printf("yes");
	}else
	{
		my_printf("no");
	}

}


return 0;
}