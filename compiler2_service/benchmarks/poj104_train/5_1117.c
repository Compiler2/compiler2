#define NUM_ITER 888307

#include <header.h>

main_bench()
{
	char a[501],b[501];
	double n;
	my_scanf("%lf",&n);
	my_scanf("%s",a);
	my_scanf("%s",b);
	int k=strlen(a);
	int l=strlen(b);
	int x=0,y=0;int mm=0;
	for(mm=0;mm<k;mm++)
	{if(a[mm]!='A'&&a[mm]!='T'&&a[mm]!='G'&&a[mm]!='C'){x=1;}}
	for(mm=0;mm<l;mm++)
	{if(b[mm]!='A'&&b[mm]!='T'&&b[mm]!='G'&&b[mm]!='C'){y=1;}}
	if(k!=l||x==1||y==1)
	{my_printf("error");}
	
	
	else{
	int i=0,p=0,q=0;
	for(i=0;a[i]!='\0';i++)
	{   q++;
		if(a[i]==b[i])
		{p++;}
	}
	double c=(double)p/q;
	if(c>n)
	{my_printf("yes");}
	else{my_printf("no");}}
	return 0;
}