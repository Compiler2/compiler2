#define NUM_ITER 995193

#include <header.h>

int pd(char *p,int l1, char s1[50])
{
	int i,t;
	t=1;
	for(i=0;i<l1;i++)
	{ if(s1[i]!=*(p+i)) {t=0;break;}
	}
	return(t);
}

main_bench()
{
	int l,i,j,t,l1,l2;
	char s1[50],s2[50],*p;
	my_scanf("%s%s",s1,s2);
	
	p=s2;
	l2=strlen(s2);l1=strlen(s1);
	for(i=0;i<l2;i++)
	{ if(pd(p+i,l1,s1))  {my_printf("%d",i);break;}
	}
}

