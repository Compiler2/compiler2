#define NUM_ITER 27682

#include <header.h>

int main_bench()
{
	char s[300],a,b,c,d;
	a='A';
	b='T';
	c='G';
	d='C';
	int n,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&s);
		for(j=0;s[j];j++)
		{
			if(s[j]==a)
				s[j]=b;
			else if(s[j]==b)
				s[j]=a;
			else if(s[j]==c)
				s[j]=d;
			else if(s[j]==d)
				s[j]=c;

		}
		my_printf("%s\n",s);

		
	}

	


	

	return 0;

}