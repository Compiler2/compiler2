#define NUM_ITER 915125

#include <header.h>

int main_bench()
{
	int b,c,i;
	double a,j=0;
	char s1[501],s2[501];
	my_scanf("%lf",&a);
	my_scanf("%s",&s1);
	my_scanf("%s",&s2);
	b=strlen(s1);
	c=strlen(s2);
	if(b!=c)
		my_printf("error");
	if(b==c)
	{
		for(i=0;i<b;i++)
		{
			if(s1[i]!='A'&&s1[i]!='T'&&s1[i]!='C'&&s1[i]!='G'&&s2[i]!='A'&&s2[i]!='T'&&s2[i]!='C'&&s2[i]!='G')
			{
				my_printf("error");
				j=-1;
				break;
			}
			else
			{
				if(s1[i]==s2[i])
					j++;
			}
		}
		if(j!=-1)
		{
			j=j/b;
			if(j>a)
				my_printf("yes");
			if(j<=a)
				my_printf("no");
		}
	}
	return 0;

}