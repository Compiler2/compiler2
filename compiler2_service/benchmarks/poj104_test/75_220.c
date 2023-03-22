#define NUM_ITER 16890

#include <header.h>


int main_bench()
{
	int a[1001]={0},b[1001]={0},p[1001]={0},s=0,j,i,ma;
	char c;
	while(1)
	{
		my_scanf("%d%c",&a[s],&c);
		s+=1;
		if(c!=',')
			break;
	}
	my_printf("\n");
	s=0;
	while(1)
	{
		my_scanf("%d%c",&b[s],&c);
		s+=1;
		if(c!=',')
			break;
	}
	for(i=0;i<1000;i++)
	{
		for(j=0;j<s;j++)
		{
			if(i>=a[j]&&i<b[j])
				p[i]+=1;
		}
	}
	ma=p[0];
	for(i=0;i<1000;i++)
	{
		if(p[i]>ma)
			ma=p[i];
	}


	my_printf("%d %d",s,ma);

}

