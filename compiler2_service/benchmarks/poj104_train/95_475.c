#define NUM_ITER 1103039

#include <header.h>

int main_bench()
{
	char c[100],d[100];
	gets(c);

	gets(d);
	int n,i,m1,m2;
	m1=0;
	m2=0;
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]>='A'&&c[i]<='Z')
			c[i]=c[i]+32;
		m1=m1+c[i];
		if(d[i]>='A'&&d[i]<='Z')
			d[i]=d[i]+32;
		m2=m2+d[i];
	}
	if(m1==m2)
		my_printf("=\n");
	if(m1>m2)
		my_printf(">\n");
	if(m1<m2)
		my_printf("<\n");
	return 0;
}

