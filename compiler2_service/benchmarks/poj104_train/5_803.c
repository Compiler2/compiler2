#define NUM_ITER 1000968

#include <header.h>

int main_bench()
{
	char s1[100],s2[100];
	int changdu1,changdu2,i,js=0;
	double rate,rate1;
	my_scanf("%lf%s%s",&rate,s1,s2);
	changdu1=strlen(s1);
	changdu2=strlen(s2);
	if(changdu1!=changdu2)
		my_printf("error");
	else
	{
		for(i=0;i<changdu1;i++)
		{
			if((s1[i]!='A'&&s1[i]!='T'&&s1[i]!='G'&&s1[i]!='C')||(s2[i]!='A'&&s2[i]!='T'&&s2[i]!='G'&&s2[i]!='C'))
			{
				js=1;
				break;
			}
		}
		if(js==1)
			my_printf("error");
		else
		{
			for(i=0;i<changdu1;i++)
			{
				if(s1[i]==s2[i])
					js++;
			}
			rate1=1.0*js/changdu1;
			if(rate1>rate)
				my_printf("yes");
			else my_printf("no");
		}
	}
	return 0;
}

