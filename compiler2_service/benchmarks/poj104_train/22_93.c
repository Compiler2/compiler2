#define NUM_ITER 16566

#include <header.h>

int main_bench()
{
	int le,max,s,i,j,k,t;
	char a[1500]="\0";	
	my_scanf("%s",a);
	le=strlen(a);
	max=0;
	s=0;
	t=0;
	while(a[t]!=',')
	{
		max=max*10+a[t]-'0';
		t++;
	}
	j=0;
	for(i=t;i<=le-1;i++)
	{
		if(a[i]!=',')
			k=1;
		else 
		{
			if(j>max) 
			{
				if(max>s) s=max;
				max=j;
			}
			if((j>s)&&(j!=max)) s=j;
	     	j=0;
	    	k=0;
		}
		if(k==1) j=j*10+(a[i]-'0');
	}
	if(j>max) 
	{
		if(max>s) s=max;
		max=j;
	}
	if((j>s)&&(j!=max)) s=j;
	if(s==0) my_printf("No\n"); else my_printf("%d\n",s);
}