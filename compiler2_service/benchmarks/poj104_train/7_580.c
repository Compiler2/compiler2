#define NUM_ITER 871043

#include <header.h>

int main_bench()
{
	int ls,lo,lr,i,j,k,flag;
	char str[257],org[257],rep[257];
	gets(str);
	gets(org);
	gets(rep);
	ls=strlen(str);
	lo=strlen(org);
	lr=strlen(rep);
	for(i=0;i<=ls-lo;i++)
	{
		flag=1;
		for(j=0;j<lo;j++)
		{
			if(str[i+j]!=org[j])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			for(k=0;k<i;k++)
				my_printf("%c",str[k]);
			for(k=0;k<lr;k++)
				my_printf("%c",rep[k]);
			for(k=i+lo;k<ls;k++)
				my_printf("%c",str[k]);
			return 0;
		}
	}
	puts(str);
	return 0;
}