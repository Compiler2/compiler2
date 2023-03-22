#include <header.h>


char a[500],b[10000];

int main_bench()
{
	double xg;
	my_scanf("%lf",&xg);
	my_scanf("%s",a);
	my_scanf("%s",b);
	int i;
	int x=0;
	int e=0;
	if(strlen(a)!=strlen(b))
		my_printf("error");
	else{
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'))
		{my_printf("error");
		e=1;
		break;}
		else
		{
			if(a[i]==b[i])
			{
				x++;
			}
		}
	}
	if(e==1)
	{
	}
	else
	{
	if((x*1.0)/(strlen(a))>xg)
		my_printf("yes");
	else
		my_printf("no");
	}
	}
	return 0;
}