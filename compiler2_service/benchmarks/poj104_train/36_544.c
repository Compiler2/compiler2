#define NUM_ITER 861072

#include <header.h>

void change(char x[])
{
	int i,j,l;
	char c;
	l=strlen(x);
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(x[i]>x[j]) { c=x[i]; x[i]=x[j]; x[j]=c; }
		}
	}
}
int main_bench()
{
	int d;
	char a[101]={'\0'},b[101]={'\0'};
	my_scanf("%s%s",a,b);
	change(a);
	change(b);
	if((d=strcmp(a,b))==0) my_printf("YES");
	else my_printf("NO");
}