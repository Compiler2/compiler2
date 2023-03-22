#define NUM_ITER 752263

#include <header.h>

int main_bench()
{
	int i,j,same=0,flag=1;
	double n;
	char a[500],b[500],c[100];
	gets(c);
	n=atof(c);
	gets(a);
	gets(b);
    for(i=0;i<strlen(a);i++)
	{
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
		{flag=0;}
		if(a[i]==b[i])
		{
			same++;
		}
	}
    double m;
	m=1.0*same/strlen(a);
	if((strlen(a)!=strlen(b))||flag==0)
	{
		my_printf("error");
	}
    else if(m<=n)
	{
		my_printf("no");
	}
	else if(m>n)
	{
		my_printf("yes");
	}
	return 0;
}

