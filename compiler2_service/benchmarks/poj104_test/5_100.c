#include <header.h>

int main_bench()
{
	int b=0,a,len1,len2,x=0,c;
	double bz;
	char m1[505],m2[505];
	my_scanf("%lf",&bz);
	my_scanf("%s%s",m1,m2);
	len1=strlen(m1);
	len2=strlen(m2);
	if(len1!=len2)
		x=1;
	for(c=0;c<len1;c++)
	{
		if(m1[c]!='A'&&m1[c]!='T'&&m1[c]!='C'&&m1[c]!='G'||m2[c]!='A'&&m2[c]!='T'&&m2[c]!='C'&&m2[c]!='G')
			x=1;
	}
	if(x)
	{
		my_printf("error");
	}
	else
	{
		for(a=0;a<len1;a++)
		{
			if(m1[a]==m2[a])
			{
				b++;
			}
		}
		if(b*1.0/len1>bz)
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