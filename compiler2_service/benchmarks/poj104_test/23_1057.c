#define NUM_ITER 1204055

#include <header.h>


int main_bench()
{
	char a[101];
	int indexa,indexb,i;
	gets(a);

	indexb=strlen(a)-1;
	while(indexb>0&&a[indexb]==' ')
		indexb--;

	if(indexb==0&&a[indexb]==' ')
		indexb--;

	indexa=indexb-1;
	int num=0;
	while(indexa>=0)
	{
		if(a[indexa]!=' ')
			indexa--;
		else
		{
			if(num!=0)
				my_printf(" ");
			num++;
			for(i=indexa+1;i<=indexb;i++)
				my_printf("%c",a[i]);
			indexb=indexa-1;
			while(indexb>0&&a[indexb]==' ')
				indexb--;
			if(indexb==0&&a[indexb]==' ')
				indexb--;
			indexa=indexb-1;
		}
	}

	if(indexb>=0)
	{
		if(num!=0)
				my_printf(" ");
		num++;
		for(i=0;i<=indexb;i++)
			my_printf("%c",a[i]);
	}
	my_printf("\n");
}