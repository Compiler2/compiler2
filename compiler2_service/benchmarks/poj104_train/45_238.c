#define NUM_ITER 1113176

#include <header.h>

int main_bench()
{
	char a[50],b[50];
	int na,nb,i=0,j,c;
	my_scanf("%s %s",a,b);
	na=strlen(a);
	nb=strlen(b);

	for(i=0;i<=nb-na;i++)
		if(a[0]==b[i])
		{	c=0;
			for(j=0;j<na;j++)
				if(a[j]==b[j+i])
				   c++;
			if(c==na)
				my_printf("%d",i);break;
		}

}