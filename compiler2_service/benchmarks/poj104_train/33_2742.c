#define NUM_ITER 24072

#include <header.h>


int main_bench()
{
	int n,len,i,j;
	char str[256],s;

	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",str);
		len=strlen(str);
		for(j=0;j<len;j++)
		{
			if(str[j]=='A')
				s='T';
			if(str[j]=='T')
				s='A';
			if(str[j]=='C')
				s='G';
			if(str[j]=='G')
				s='C';
			if(j<len-1)
				my_printf("%c",s);
			else
				my_printf("%c\n",s);
		}

	}
	return 0;
}