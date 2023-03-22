#define NUM_ITER 1332722

#include <header.h>

int main_bench()
{
	char str[100];
	gets(str);
	int l,i,j,m;
	l=strlen(str);
	int a[50];
	j=0;
	for(i=0;i<l;i++)
	{
		if(str[i]==' ')
		{
			a[j]=i;
			j=j+1;
		}
	}
	if(j!=0)
	{
		for(i=(a[j-1]+1);i<l;i++)
	        my_printf("%c",str[i]);
	    my_printf(" ");
	    for(m=2;m<=j;m++)
		{ 
		    for(i=(a[j-m]+1);i<=(a[j-m+1]-1);i++)
			    my_printf("%c",str[i]);
		    my_printf(" ");
		}
	    for(i=0;i<a[0];i++)
		    my_printf("%c",str[i]);
	}
	else
		my_printf("%s",str);
return 0;
}