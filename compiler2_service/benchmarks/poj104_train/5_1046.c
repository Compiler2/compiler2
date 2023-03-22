#define NUM_ITER 870959

#include <header.h>

int main_bench()
{
	char a[501],b[501];
	int i,summ;
	double bl,sjbl,s,sum;
	s=0;
	my_scanf("%lf",&bl);
	my_scanf("%s",a);
	my_scanf("%s",b); 
	sum=strlen(a);
	summ=strlen(b);
     if(sum!=summ)
	{
		my_printf("error");
		return 0;
}else{
	for(i=0;i<sum;i++)
	{
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
		{
			my_printf("error");
			return 0;
		}
		if(a[i]==b[i])
			s++;
	}
}
	sjbl=s/sum;
    if(sjbl>bl)
	{
		my_printf("yes");
	}else{
		my_printf("no");
	}
    return 0;
}
 