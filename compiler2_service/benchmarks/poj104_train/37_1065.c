#define NUM_ITER 25153

#include <header.h>


 



int main_bench()
{
	int n,i,l,a,t,k;
	char s[100000],*p,*q;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(s);
		l=strlen(s);

		t=0;
		for(p=s;p<s+l;p++)
		{
			a=1;
			for(q=s;q<s+l;q++)
			{
				if(p!=q&&*p==*q)
				{
						a=0;
						break;
				}
			}
			if(a==1) 
			{
				t=1;
				my_printf("%c\n",*p);
				break;
			}
		}
		
		if(t==0)
			my_printf("no\n");
	}
	return 0;
}
