#define NUM_ITER 1288516

#include <header.h>

int main_bench()
{
	char a[1000];
	int i,j,k;
	gets(a);
	k=strlen(a);
	for(i=0;a[i]==' ';i++);
	for(;i<k;)
	{
		if(a[i]!=' ')
		{
			for(j=i+1;a[j]!=' '&&j<k;j++);
			my_printf("%d",j-i);
			i=j;
		}
		else
		{
			for(j=i+1;a[j]==' '&&j<k;j++);
			my_printf(",");
			i=j;
		}
	}
	my_printf("\n");
	return 0;
}