#define NUM_ITER 213647

#include <header.h>

int main_bench()
{
	int i,j,k;
	char a[300]={'\0'};
	char c[300]={'\0'};

    for(i=0;;i++)
	{
		a[i]=getchar();
		if(a[i]=='\n')
		{break;}
	}
	k=i;
	
	
	
	c[0]=a[0];
	

	for(i=1,j=1;i<k;)
	{
		
		if(a[i]!=' ')
		{c[j]=a[i];j++;i++;}
		if((a[i]==' ')&&(a[i-1]!=' '))
		{c[j]=a[i];j++;i++;}
		if((a[i]==' ')&&(a[i-1]==' '))
		{i++;}
		
	}

	for(i=0;i<j;i++)
	{my_printf("%c",c[i]);}
	return 0;
}