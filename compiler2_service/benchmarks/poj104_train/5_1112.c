#include <header.h>

int main_bench(){
	double b;
	int l1,l2,x=0;
	char d1[500],d2[500];
	my_scanf("%lf%s%s",&b,d1,d2);
	l1=strlen(d1);
	l2=strlen(d2);
	if(l1!=l2)
	{
		my_printf("error");
		return 0;
	}
	for(int i=0;i<l1;i++)
	{
		if(d1[i]!='A'&&d1[i]!='T'&&d1[i]!='C'&&d1[i]!='G')
		{
			my_printf("error");
		    return 0;
		}
		if(d2[i]!='A'&&d2[i]!='T'&&d2[i]!='C'&&d2[i]!='G')
		{
			my_printf("error");
		    return 0;
		}
		if(d1[i]==d2[i])
		{
			x++;
		}
	}
	if(1.0*x/l1>b){
		my_printf("yes");
	}else
	{
		my_printf("no");
	}
	return 0;
}
