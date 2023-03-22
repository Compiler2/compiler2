#define NUM_ITER 910551

#include <header.h>

int main_bench(){
	int i,k=1,l,e;
	char s[501],g[501];
	double n,r;
	my_scanf("%lf",&n);
	my_scanf("%s%s",s,g);
	l=strlen(s);
	e=strlen(g);
	if(l!=e)
	{
		my_printf("error");
	}
	else
	{
	    for(i=0;s[i];i++)
		{
	    	if(((s[i]=='A')||(s[i]=='T')||(s[i]=='C')||(s[i]=='G'))&&((g[i]=='A')||(g[i]=='T')||(g[i]=='C')||(g[i]=='G')))
			{
				if(g[i]==s[i])
				{
					k++;
				}
			}
			else
			{
				k=0;
				break;
			}
		}
		if(k==0)
		{
			my_printf("error");
		}
		else
		{
			k--;
		    r=1.0*k/l;
		    if(r>n)
			{
		    	my_printf("yes");
			}
		    else
			{
		    	my_printf("no");
			}
		}
	}
	return 0;
}			
