#define NUM_ITER 832097

#include <header.h>

int main_bench()
{
	int i,k,m[1000]={0},n;
	char a[5000];
	gets(a);
	n=strlen(a);
	for(i=0,k=0;i<n;i++)
	{
		if(a[i]!=' ')
			m[k]++;
		else 
		{
			do{i++;}
				while(a[i]==' ');
				i--;
			k++;
		    continue;
		}
	}
	my_printf("%d",m[0]);
	for(i=1;i<=k;i++)
	{
		my_printf(",%d",m[i]);
	}
	return 0;
}