#define NUM_ITER 1000086

#include <header.h>

char a[50],b[50];
int f(int,int);
int main_bench()
{
	int len1,len2,i;
    my_scanf("%s%s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<=len2-len1;i++)
	{
		if(f(len1,i)==0)
		break;
	}
	my_printf("%d\n",i);
}
int f(int len1,int i)
{
	int j,c=0;
	for(j=0;j<=len1-1;j++)
		c=c+(b[i+j]-a[j])*(b[i+j]-a[j]);
	return(c);
}
