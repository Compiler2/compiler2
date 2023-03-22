#include <header.h>

int main_bench()
{
	char x[1000][41];
	int a,b,i;
	my_scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		my_scanf("%s",x[i]);
	}
	x[a][0]='\0';
	b=strlen(x[0]);
	for(i=0;i<a;i++)
	{
		b+=strlen(x[i+1]);
		if(b>=80)
		{
			my_printf("%s\n",x[i]);
			b=strlen(x[i+1]);
		}
		else if(i==a-1)
		{
			my_printf("%s",x[i]);
		}
		else 
		{my_printf("%s ",x[i]);
		b++;}

	}


	return 0;
}