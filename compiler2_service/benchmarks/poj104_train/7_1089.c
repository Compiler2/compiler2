#define NUM_ITER 993889

#include <header.h>

int main_bench()
{	int a,i,j,m,k,p;
	char r[257],s[257],w[257];
	my_scanf("%s",w);
	my_scanf("%s",s);
	my_scanf("%s",r);
	a=strlen(s);
	p=0;
	for(i=0;w[i];i++)
	{	
		if(w[i]==s[0])
		{	m=0;
			for(j=0;j<a;j++)
			{	if(w[i+j]==s[j])
				{	m=m+1;
				}
			}
			if(m==a)
			{	p=p+1;
				for(k=0;k<a;k++)
				{	w[i+k]=r[k];
				}
				my_printf("%s",w);
				break;
			}
		}
	}
	if(p==0)
	{	my_printf("%s",w);
	}
	return 0;
}
