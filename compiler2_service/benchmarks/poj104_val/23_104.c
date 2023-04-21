#define NUM_ITER 1141303

#include <header.h>

int main_bench()
{
    char string[100];
	int i,k=0,j=0,n=0,a[100]={0};
    gets(string);
	for(i=0;i<100;i++)
	{
		if(string[i]!='\0')n++;
	else break;
	}
	for(i=n-1;i>=0;i--)
	{
		if(string[i]!=' ')a[k]++;
	    else k++;
	}

	
	for(j=0;j<k;j++)
	{
		for(i=n-a[j];i<n;i++)
		{my_printf("%c",string[i]);}
	    n=n-a[j]-1;
		my_printf(" ");
	}
	for(i=n-a[j];i<n;i++)
		{my_printf("%c",string[i]);}
		 
	
}