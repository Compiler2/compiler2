#define NUM_ITER 5542

#include <header.h>

int main_bench()
{
	int n,i,j,k;
	char a[1000][50];
	int b[1000];
	int *p;
	char (*p1)[50];
	my_scanf("%d",&n);
	p=b;
	p1=a;
	for(i=0;i<n;i++)
	{
		my_scanf("%s",*(p1+i));
		*(p+i)=strlen(*(p1+i));
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				k=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=k;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		k=strlen(*(p1+i));
		if(k==*(p+n-1)){my_printf("%s\n",*(p1+i));break;}
	}
	for(i=0;i<n;i++)
	{
		k=strlen(*(p1+i));
		if(k==*(p+0)){my_printf("%s",*(p1+i));break;}
	}
}


