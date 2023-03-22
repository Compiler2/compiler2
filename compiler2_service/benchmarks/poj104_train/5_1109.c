#include <header.h>

int main_bench(){
	int i,k;
	double c,s;
	char m,n;
	char a[501];
	char b[501];
	s=0.0;
	my_scanf("%lf%c%s%c%s",&c,&m,a,&n,b);
	if(strlen(a)!=strlen(b)){my_printf("error");return 0;}
	else
	{k=strlen(a);
		for(i=0;i<k;i++)
		{
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
		{my_printf("error");return 0;}
		if(a[i]==b[i]){s++;}
		}
	if(s*1.0/strlen(a)>=c)
	{my_printf("yes");}
	else
	{my_printf("no");}
	return 0;
	}

    
}
