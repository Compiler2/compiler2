#include <header.h>

int main_bench()
{
	int a,b,c,d,len,lena;
	double r,ra;
	char z[200];
	char x[200];
	my_scanf("%lf",&r);
	my_scanf("%s",z);
	my_scanf("%s",x);
	len=strlen(z);
	lena=strlen(x);
	d=0;
	for(a=0;a<=len-1;a++)
	{
        if(len!=lena) d=1;
		if ((z[a]!='A')&&(z[a]!='T')&&(z[a]!='C')&&(z[a]!='G')) d=1;
        if ((x[a]!='A')&&(x[a]!='T')&&(x[a]!='C')&&(x[a]!='G')) d=1;
	}
	if(d==1) 
	{
		my_printf("error");
		return 0;
	}
	b=0;c=0;
    for(a=0;a<=len-1;a++)
	{
		c++;
		if(z[a]==x[a]) b++;
	}
	ra=b*1.0/c;
	if (ra>r) my_printf("yes");
		else my_printf("no");
	return 0;
}