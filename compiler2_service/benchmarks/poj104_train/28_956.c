#define NUM_ITER 1198429

#include <header.h>


char a[300];

int main_bench()
{

	gets(a);
	int n=strlen(a);


	int p=0,q=0,m=0;
	while(p<n&&q<n)
	{
		while(a[p]==' ')
			p++;

		q=p;

		while(a[q]!=' '&&a[q]!=0)
			q++;
		if(m==0)

		    my_printf("%d",q-p);
		else
			my_printf(",%d",q-p);
		p=q;
		m++;
	}


	
	return 0;
         
}
