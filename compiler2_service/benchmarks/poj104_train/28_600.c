#define NUM_ITER 1198758

#include <header.h>

int main_bench()
{
	char a[2000],*p;
	gets(a);
	p=a;
	int i,j=0,n,k=0;
	n=strlen(a);
	a[n]=' ';
	a[n+1]='\0';
	while(*(p+j)!=' ')
	{
		k++;
		j++;
	}
	my_printf("%d",k);
	k=0;
	while(*(p+j)==' ')
		j++;
	for(i=j;i<n+1;i++)
	{
		if(*(p+i)!=' ')
			k++;
		if(*(p+i)==' ')
		{
			if(*(p+i-1)!=' ')
			{
			   my_printf(",%d",k);
			    k=0;
			}
			if(*(p+i-1)==' ')
				k=0;
		}
	}
	return 0;
}
		