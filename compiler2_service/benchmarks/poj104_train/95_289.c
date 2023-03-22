#define NUM_ITER 1066893

#include <header.h>

int main_bench()
{
	char n[80], m[80];
	gets(n);
	gets(m);
	int x, y, i, k=0;
	x=strlen(n);
	for (i=0;n[i]!='\0';i++)
	{
		if (n[i]>='A'&&n[i]<='Z')
		{
			n[i]=n[i]+32;
		}
	}
	for (i=0;m[i]!='\0';i++)
	{
		if (m[i]>='A'&&m[i]<='Z')
		{
			m[i]=m[i]+32;
		}
	}
	for (i=0;n[i]!='\0';i++)
	{
		if (n[i]==m[i]) k++;
		if (n[i]>m[i]) 
		{
			my_printf(">\n");
			break;
		}
		if (n[i]<m[i])
		{
			my_printf("<\n");
			break;
		}
	}
	if (k==x) my_printf("=\n");
	

	return 0;
}