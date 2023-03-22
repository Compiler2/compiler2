#define NUM_ITER 726901

#include <header.h>

int main_bench()
{
	char a[500]={'0'},b[500]={'0'};
	double n,flag=0;
	int i,j,k,check;
	my_scanf("%lf",&n);
	my_scanf("%s",a);
	my_scanf("%s",b);
	int la=strlen(a),lb=strlen(b);
	if(la!=lb)	{my_printf("error\n");	return 0;}
	for(i=0;i<la;i++)
	{	
		if(!(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G'||b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G'))
		{
			my_printf("error\n");
			return 0;
		}
	}
	for(i=0;i<la;i++)
	{
		if(a[i]==b[i])	flag++;
	}
	flag=(double)flag/la;
	if(flag>n)	my_printf("yes\n");
	if(flag<=n)	my_printf("no\n");
	return 0;
}

