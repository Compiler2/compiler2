#include <header.h>

int main_bench()
{
	int m,la,lb,x,i;
	double r0,r1;
	char a[505],b[505];
	my_scanf("%lf",&r0);
	my_scanf("%s",a);
	my_scanf("%s",b);
	la=strlen(a);
	lb=strlen(b);
	if(la!=lb)
		my_printf("error\n");
	else
	{
		x=1;
	    for(i=0,m=0;i<la;i++)
		{
		    if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')
			{
				my_printf("error\n");
				x=0;
				break;
			}
			else if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')
			{
				my_printf("error\n");
				x=0;
				break;
			}
			else
			{
				if(a[i]==b[i])
				    m++;
			}
		}
		r1=1.0*m/la;
		if(x==1)
		{
			if(r1>r0)
				my_printf("yes\n");
			else
				my_printf("no\n");
		}
	}
	return 0;
}