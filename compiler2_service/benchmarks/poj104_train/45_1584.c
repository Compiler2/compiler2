#define NUM_ITER 1069699

#include <header.h>

int main_bench()
{
	int i,n,j=0,x,y,c[100],k=0,m=0;
	char a[50],b[50];
	my_scanf("%s %s",a,b);
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<y-x+1;i++)
	{
		for(j=0;j<x;j++)
		{	if(a[j]==b[i+j]) m++;}
		if(m==x) 
		{ c[k]=i;k++;}
		m=0;
	}
	my_printf("%d\n",c[0]);

}